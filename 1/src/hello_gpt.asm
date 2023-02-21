lda #$00      ; load 0 into accumulator
sta $d020     ; clear screen
lda #<message ; load the low byte of the message address
ldy #>message ; load the high byte of the message address
jsr $ffd2     ; call the KERNAL routine to set the screen color
lda #<message ; load the low byte of the message address
ldy #>message ; load the high byte of the message address
jsr $ffd4     ; call the KERNAL routine to print the message
rts           ; return from subroutine

message: .byte $0d,$0d,$0d,$0d,$0d,$0d,$0d,$0d,$0d,$0d ; add some blank lines to center message
        .byte "        Hello World!"                    ; print message in the center of the screen