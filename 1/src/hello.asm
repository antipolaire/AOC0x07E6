jsr $E544 ; Clear screen
lda #0 ; black
sta $D020 ; background color
sta $D021 ; border color
lda #04 ; red
sta $0286 ; text color
ldx #0 ; X = 0
loop:
    lda message, x ; A = message[x]
    beq done ; If A = 0, jump to done
    jsr $FFD2 ; Chrout
    inx ; X = X + 1
    bne loop ; If X != 0, jump to loop
done:
    rts

message: 
    .asciiz "hello world"
