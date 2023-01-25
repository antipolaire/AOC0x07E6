;; This is an assembler program for the Commodore 64 (C64) computer. It defines a macro 
;; called "fn_printdec" which, when invoked, will convert a 32-bit hexadecimal value to
;; its decimal equivalent and print it to the screen.
;; 
;; The macro starts by calling a subroutine called "hex2dec" which converts the 32-bit
;; value to its decimal equivalent. The subroutine uses another subroutine called 
;; "div10" to divide the value by 10 repeatedly and store the remainder in an array
;; called "result".
;; 
;; After the conversion, the program skips any leading zeros in the decimal
;; representation, then loads the decimal digits into a register and prints them to the
;; screen using a C64 specific system call ($FFD2) which is a Kernal routine for
;; outputting a character on the screen.
;; 
;; The final part of the macro returns control to the caller with the RTS instruction.
;; 
;; It should be noted that the value being converted is hardcoded in the program as a
;; byte array called "value" with the value of $0F,$01,$00,$00 which represent 271 in decimal.

.MACRO fn_printdec
printdec:
        jsr hex2dec

        ldx #9
l1:     lda result,x
        bne l2
        dex             ; skip leading zeros
        bne l1

l2:     lda result,x
        ora #$30
        jsr $ffd2
        dex
        bpl l2
        rts

        ; converts 10 digits (32 bit values have max. 10 decimal digits)
hex2dec:
        ldx #0 ; x = 0
l3:     jsr div10 ; jump to div10
        sta result,x ; result[x] = akku
        inx ; x++
        cpx #10 ; x < 10 ?
        bne l3 ; if yes, repeat
        rts ; if no, return

        ; divides a 32 bit value by 10
        ; remainder is returned in akku
div10:
        ldy #32 ; y = 32
        lda #0 ; akku = 0
        clc ; C = 0
l4:     rol ; A = A * 2 + C
        cmp #10 ; A < 10 ?
        bcc skip ; if C = 0, go to skip
        sbc #10 ; if no, A = A - 10
skip:   rol value
        rol value+1
        rol value+2
        rol value+3
        dey
        bpl l4
        rts
.ENDMACRO

fn_printdec

;; $0F,$00,$00,$00 = 15
;; $0F,$01,$00,$00 = 15 + 256 = 271
;; $0F,$01,$00,$00  ; 1^15 + 2^8 = 271

value:   .byte $0F,$01,$00,$00

result:  .byte 0,0,0,0,0,0,0,0,0,0