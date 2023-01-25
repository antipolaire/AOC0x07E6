; main.asm

.include "const.inc"

.MACRO printdec64   value, result
        jsr hex2dec ; jump to hex2dec routine
        ldx #21 ; X = 21
    loop1:
        lda result,x ; A = result[x]
        bne loop2 ; if A != 0 then goto loop2
        dex ; X = X - 1 ; skip leading zeros
        bne loop1 ; if X != 0 then goto loop1

    loop2:
        lda result,x ; A = result[x]
        ora #$30 ; A = A | $30
        jsr KERNAL_CHROUT ; print character
        dex ; X = X - 1
        bpl loop2 ; if X >= 0 then goto loop2
        rts ; return

    hex2dec:
        ldx #0 ; X = 0
    loop3:
        jsr div10 ; jump to div10 routine
        sta result,x ; result[x] = A
        inx ; X = X + 1
        cpx #21 ; if X == 21 then goto loop3
        bne loop3 ; if X != 21 then goto loop3
        rts ; return
        
    div10:
    ; divides a 64 bit value by 10
        ldy #64 ; Y = 64 (bits)
        lda #0 ; A = 0
        clc ; clear carry
    loop4:
        rol a ; A = A << 1
        cmp #10 ; if A == 10 then goto loop5
        bcc skip ; if A < 10 then goto skip
        sbc #10 ; A = A - 10
    skip:
        rol value ; value = value << 1
        rol value+1 ; value+1 = value+1 << 1
        rol value+2 ; value+2 = value+2 << 1
        rol value+3 ; ...
        rol value+4 ; ...
        rol value+5 ; ...
        rol value+6 ; ...
        rol value+7 ; value+7 = value+7 << 1

        dey ; Y = Y - 1
        bpl loop4 ; if Y >= 0 then goto loop4
        rts ; return
.ENDMACRO

.MACRO add8bit
    clc
    lda TEMP_1
    adc TEMP_2
    sta TEMP_1
    lda TEMP_1+1
    adc TEMP_2+1
    sta TEMP_1+1
    lda TEMP_1+2
    adc TEMP_2+2
    sta TEMP_1+2
    lda TEMP_1+3
    adc TEMP_2+3
    sta TEMP_1+3
    lda TEMP_1+4
    adc TEMP_2+4
    sta TEMP_1+4
    lda TEMP_1+5
    adc TEMP_2+5
    sta TEMP_1+5
    lda TEMP_1+6
    adc TEMP_2+6
    sta TEMP_1+6
    lda TEMP_1+7
    adc TEMP_2+7
    sta TEMP_1+7
    rts
.ENDMACRO

.MACRO add
    clc ; C = 0
    adc TEMP_1 ; A = A + TEMP_1 + C
    sta TEMP_1 ; TEMP_1 = A
    bcc end ; C == 0 ? end : continue
    inc TEMP_2 ; TEMP_2 = TEMP_2 + 1
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

    lda #40 ; A = 40
    sta TEMP_1 ; TEMP_1 = A
    printdec64 255, TEMP_1
    ; lda #40 ; A = 1
    ; sta TEMP_1 ; TEMP_1 = A
    ; lda #1 ; A = 2
    ; sta TEMP_2 ; TEMP_2 = A
    ;; add8bit ; add TEMP_1 and TEMP_2
    ;; printdec64 TEMP_1, TEMP_2
    ;; lda TEMP_1
    ;; jsr KERNAL_CHROUT
    rts

;; lda #KEY_RETURN ; A = KEY_RETURN
;; jsr KERNAL_CHROUT ; Print A
;; jsr KERNAL_CHROUT ; Print A
;; jsr KERNAL_CHROUT ; Print A

; data:
;     .incbin "input_test.dat"