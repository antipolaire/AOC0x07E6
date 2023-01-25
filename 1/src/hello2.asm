
.proc draw_sprite

; Clear the screen
jsr $E544

; Define the sprite data
sprite_data:
    .byte %00000000, %00000000, %00001000, %00011100, %00111110, %01111111, %01111111, %01111111

; Set the sprite data pointer registers
lda #<sprite_data
sta $07f8
lda #>sprite_data
sta $07f9

; Set the sprite enable register
lda #%00010000 ; Enable sprite 0 and set its size
sta $d015

; Set the sprite color
lda #%00000001 ; Set the sprite color to 1 (red)
sta $d027

; Set the sprite position
lda #$00 ; Set the X position to 0
sta $07f6
lda #$00 ; Set the Y position to 0
sta $07f5

.endproc

; Jump to the draw_sprite subroutine
jmp draw_sprite