; main.asm

.include "const.inc"

zero                = $00
clr                 = 147 ; $93
black               = $00
pink                = $04
poscolor = 646
cursorcolor = 647

main:
    lda #black
    sta BORDER_COLOR
    sta BACKGROUND_COLOR
    lda #pink
    sta poscolor

    lda #clr ; clear screen
    jsr KERNAL_CHROUT ; 

; print content of data
    ldx #zero ; X = 0
    lda data, x ; A = data[X]

    @loop:
        jsr KERNAL_CHROUT ; Print A
        inx ; X++
        lda data, x ; A = data[X]
        bne @loop ; If A != 0, loop
        lda #KEY_RETURN ; A = KEY_RETURN
        jsr KERNAL_CHROUT ; Print A
        rts

; @space:
;     cmp #KEY_SPACE ; A == KEY_SPACE ?
;     beq @space ; yes, print space
;     lda #KEY_SPACE ; A = KEY_SPACE
;     jsr KERNAL_CHROUT ; Print A
;     rts

msg:
    .asciiz   "this is simple demo code XXX."

data:
    .incbin "input_test.dat"