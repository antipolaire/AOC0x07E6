;; Optimized version of dec.asm

; Macro to convert and print 32-bit hex value in decimal
.MACRO printHexValue
    ; Convert hex value to decimal
    jsr convertToDecimal
    
    ; Skip leading zeros
    ldx #9
    skipLeadingZeros:
        lda result,x
        bne printDecimal
        dex
        bne skipLeadingZeros

    ; Print decimal representation
    printDecimal:
        lda result,x
        ora #$30
        jsr $ffd2
        dex
        bpl printDecimal
    rts

    ; Subroutine to convert hex value to decimal
    convertToDecimal:
        ldx #0
        convertLoop:
            jsr divideBy10
            sta result,x
            inx
            cpx #10
            bne convertLoop
        rts

    ; Subroutine to divide by 10 and return remainder in A register
    divideBy10:
        ldy #32
        lda #0
        clc
        divideLoop:
            rol
            cmp #10
            bcc skip
            sbc #10
        skip:
            rol value
            rol value+1
            rol value+2
            rol value+3
            dey
            bpl divideLoop
        rts
.ENDMACRO

printHexValue

value: .byte $0F, $01, $00, $00
result: .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
