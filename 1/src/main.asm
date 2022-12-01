; main.asm

.include "const.inc"

.MACRO add
    clc ; clear carry
    adc TEMP_1
    sta TEMP_1
    bcc end ; if carry is clear, then we're done
    inc TEMP_2
    end:
.ENDMACRO

.define DEBUG(message)  .out    message

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

    lda #KEY_CLEAR
    jsr KERNAL_CHROUT

    lda #40 ; A = 1
    sta TEMP_1 ; TEMP_1 = A
    lda #1 ; A = 2
    sta TEMP_2 ; TEMP_2 = A
    add ; add TEMP_1 and TEMP_2
    lda TEMP_1 ; A = TEMP_2
    jsr KERNAL_CHROUT
    rts

;; ; print content of data
;;     ldx #0 ; X = 0
;;     lda data, x ; A = data[X]
;;     @loop:
;;         jsr KERNAL_CHROUT ; Print A
;;         inx ; X++
;;         lda data, x ; A = data[X]
;;         bne @loop ; If A != 0, loop
;;         lda #KEY_RETURN ; A = KEY_RETURN
;;         jsr KERNAL_CHROUT ; Print A
;;     rts

;; lda #KEY_RETURN ; A = KEY_RETURN
;; jsr KERNAL_CHROUT ; Print A
;; jsr KERNAL_CHROUT ; Print A
;; jsr KERNAL_CHROUT ; Print A

; data:
;     .incbin "input_test.dat"