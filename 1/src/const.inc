SECONDARY_ADDRESS    = $B9
DEVICE_NUMBER        = $BA
PNTR                 = $D3
CURSOR_X_POS         = $D3
TBLX                 = $D6
CURSOR_Y_POS         = $D6
CURSOR_COLOR         = $286
VICSCN               = $400
SCREEN_RAM           = $400
COLOR_RAM            = $D800
;  Safe zero page locations $57-$70, $92-$96, $A3-$B1, $F7-$FE
TEMP_1               = $FB
TEMP_2               = $FC
zp_tmp               = $FB
zp_tmp_lo            = $FB
zp_tmp_hi            = $FC
TEMP_3               = $FD
TEMP_4               = $FE
TEMP_5               = $02
TEMP_6               = $c003
TEMP_7               = $04
TEMP_8               = $05
zp_ptr_screen        = $60
zp_ptr_screen_lo     = $60
zp_ptr_screen_hi     = $61
zp_ptr_color         = $62
zp_ptr_color_lo      = $62
zp_ptr_color_hi      = $63
zp_point_tmp         = $59
zp_point_tmp_lo      = $59
zp_point_tmp_hi      = $5a
zp_ptr_2             = $64
zp_ptr_2_lo          = $64
zp_ptr_2_hi          = $65
zp_temp              = $a3
zp_temp2             = $a4
zp_temp3             = $a5
JOYPORT_TIMER        = $05
;  VARIOUS STUFF
ZP_DATA_DIRECTION    = $00
ZP_IO_REGISTER       = $01
KERNAL_STOP_VECTOR   = $0328

;  SPRITE POINTERS
SPRITE_POINTERS      = $7F8
SPRITE_0_POINTER     = $7F8
SPRITE_1_POINTER     = $7F9
SPRITE_2_POINTER     = $7FA
SPRITE_3_POINTER     = $7FB
SPRITE_4_POINTER     = $7FC
SPRITE_5_POINTER     = $7FD
SPRITE_6_POINTER     = $7FE
SPRITE_7_POINTER     = $7FF

;  VIC CONSTANTS
SPRITE_LOCATIONS     = $D000
SPRITE_0_X           = $D000 ;  53248 SP0X Sprite 0 Horizontal Position
SPRITE_0_Y           = $D001 ;  53249 SP0Y Sprite 0 Vertical Position
SPRITE_1_X           = $D002 ;  53250 SP1X Sprite 1 Horizontal Position
SPRITE_1_Y           = $D003 ;  53251 SP1Y Sprite 1 Vertical Position
SPRITE_2_X           = $D004 ;  53252 SP2X Sprite 2 Horizontal Position
SPRITE_2_Y           = $D005 ;  53253 SP2Y Sprite 2 Vertical Position
SPRITE_3_X           = $D006 ;  53254 SP3X Sprite 3 Horizontal Position
SPRITE_3_Y           = $D007 ;  53255 SP3Y Sprite 3 Vertical Position
SPRITE_4_X           = $D008 ;  53256 SP4X Sprite 4 Horizontal Position
SPRITE_4_Y           = $D009 ;  53257 SP4Y Sprite 4 Vertical Position
SPRITE_5_X           = $D00A ;  53258 SP5X Sprite 5 Horizontal Position
SPRITE_5_Y           = $D00B ;  53259 SP5Y Sprite 5 Vertical Position
SPRITE_6_X           = $D00C ;  53260 SP6X Sprite 6 Horizontal Position
SPRITE_6_Y           = $D00D ;  53261 SP6Y Sprite 6 Vertical Position
SPRITE_7_X           = $D00E ;  53262 SP7X Sprite 7 Horizontal Position
SPRITE_7_Y           = $D00F ;  53263 SP7Y Sprite 7 Vertical Position
SPRITE_LOCATIONS_MSB = $D010 ;  53264 Most Significant Bits of Sprites 0-7 Horizontal Position
SPRITE_MSB_X         = $D010 ;  53264 Most Significant Bits of Sprites 0-7 Horizontal Position
VIC_CONTROL_REG_1    = $D011 ;  53265 RST8 ECM- BMM- DEN- RSEL [   YSCROLL   ]
VIC_RASTER_COUNTER   = $D012 ;  53266
VIC_LIGHT_PEN_X      = $D013 ;  53267
VIC_LIGHT_PEN_Y      = $D014 ;  53268
SPRITE_ENABLE        = $D015 ;  53269
VIC_CONTROL_REG_2    = $D016 ;  53270 ---- ---- RES- MCM- CSEL [   XSCROLL   ]
SPRITE_EXPAND_Y      = $D017 ;  53271
VIC_MEM_POINTERS     = $D018 ;  53272 VM13 VM12 VM11 VM10 CB13 CB12 CB11 ----
VIC_INTERRUPT_REG    = $D019 ;  53273 IRQ- ---- ---- ---- ILP- IMMC IMBC IRST
VIC_INTERRUPT_ENABLE = $D01A ;  53274 ---- ---- ---- ---- ELP- EMMC EMBC ERST
SPRITE_PRIORITY      = $D01B ;  53275
SPRITE_MULTICOLOR    = $D01C ;  53276
SPRITE_EXPAND_X      = $D01D ;  53277
SPRITE_COLLISION_SPR = $D01E ;  53278
SPRITE_COLLISION_DATA= $D01F ;  53279
BORDER_COLOR         = $D020 ;  53280
BACKGROUND_COLOR     = $D021 ;  53281
BACKGROUND_COLOR_1   = $D022 ;  53282
BACKGROUND_COLOR_2   = $D023 ;  53283
BACKGROUND_COLOR_3   = $D024 ;  53284
SPRITE_MULTICOLOR_0  = $D025
SPRITE_MULTICOLOR_1  = $D026
SPRITE_COLORS        = $D027
SPRITE_0_COLOR       = $D027
SPRITE_1_COLOR       = $D028
SPRITE_2_COLOR       = $D029
SPRITE_3_COLOR       = $D02A
SPRITE_4_COLOR       = $D02B
SPRITE_5_COLOR       = $D02C
SPRITE_6_COLOR       = $D02D
SPRITE_7_COLOR       = $D02E

;  IO CONSTANTS
JOYSTICK_PORT_2      = $DC00
JOYSTICK_PORT_1      = $DC01

;  SID CONSTANTS
SID_V1_FREQ_LOW      = $D400 ;  (54272) frequency voice 1 low byte
SID_V1_FREQ_HIGH     = $D401 ;  (54273) frequency voice 1 high byte
SID_V1_PULSE_LOW     = $D402 ;  (54274) pulse wave duty cycle voice 1 low byte 7..4 3..0
SID_V1_PULSE_HIGH    = $D403 ;  (54275) pulse wave duty cycle voice 1 high byte
SID_V1_CONTROL_REG   = $D404 ;  (54276) control register voice 1 - 7 noise,6 pulse,5 sawtooth,4 triangle,3 test,2 ring modulation with voice 3,1 synchronize with voice 3,0 gate
SID_V1_ATK_DECAY     = $D405 ;  (54277) attack duration	decay duration voice 1
SID_V1_SUS_REL       = $D406 ;  (54278) sustain level	release duration
SID_V2_FREQ_LOW      = $D407 ;  (54279) frequency voice 2 low byte
SID_V2_FREQ_HIGH     = $D408 ;  (54280) frequency voice 2 high byte
SID_V2_PULSE_LOW     = $D409 ;  (54281) pulse wave duty cycle voice 2 low byte 7..4	3..0
SID_V2_PULSE_HIGH    = $D40A ;  (54275) pulse wave duty cycle voice 2 high byte
SID_V2_CONTROL_REG   = $D40B ;  (54283) control register voice 2 - 7 noise,6 pulse,5 sawtooth,4 triangle,3 test,2 ring modulation with voice 3,1 synchronize with voice 3,0 gate
SID_V2_ATK_DECAY     = $D40C ;  (54284) attack duration	decay duration voice 2
SID_V2_SUS_REL       = $D40D ;  (54285) sustain level	release duration voice 2
SID_V3_FREQ_LOW      = $D40E ;  (54286) frequency voice 3 low byte
SID_V3_FREQ_HIGH     = $D40F ;  (54287) frequency voice 3 high byte
SID_V3_PULSE_LOW     = $D410 ;  (54288) pulse wave duty cycle voice 3 low byte 7..4	3..0
SID_V3_PULSE_HIGH    = $D411 ;  (54275) pulse wave duty cycle voice 3 high byte
SID_V3_CONTROL_REG   = $D412 ;  (54290) control register voice 3 - 7 noise,6 pulse,5 sawtooth,4 triangle,3 test,2 ring modulation with voice 3,1 synchronize with voice 3,0 gate
SID_V3_ATK_DECAY     = $D413 ;  (54291) attack duration	decay duration voice 3
SID_V3_SUS_REL       = $D414 ;  (54292) sustain level	release duration voice 3
SID_FILTER_CUTOFF_LOW= $D415 ;  (54293) filter cutoff frequency low byte
SID_FILTER_CUTOFF_HIGH=$D416 ;  (54294) filter cutoff frequency high byte
SID_FILTER_RESONANCE = $D417 ;  (54295) filter resonance and routing - 7..4 - filter resonance, 3 - external input, 2 - voice 3, 1 - voice 2, 0 - voice 1
SID_VOLUME_FILTER    = $D418 ;  (54296) filter mode and main volume control - 7 - mute voice 3, 6 - high pass, 5 - band pass, 4 - low pass, 3..0 - main volume
PADDLE_X             = $D419 ;  (54297) paddle x value (read only)
PADDLE_Y             = $D41A ;  (54298) paddle y value (read only)
SID_OSCILLATOR_V3    = $D41B ;  (54299) oscillator voice 3 (read only)
SID_ENVELOPE_V3      = $D41C ;  (54300) envelope voice 3 (read only)

;  User Port Stuff
USER_PORT_DATA       = $DD01 ;  User Port Data
USER_PORT_DATA_DIR   = $DD03 ;  User Port Data Direction per bit 1 = talk 0 = listen

;  1541 Ultimate II Command Interface
UII_CONTROL          = $DF1C ;  CONTROL REGISTER (WRITE)
UII_STATUS           = $DF1C ;  STATUS REGISTER (READ) $00
UII_COMMAND          = $DF1D ;  COMMAND DATA REGISTER (WRITE)
UII_ID               = $DF1D ;  IDENTIFICATION REGISTER (READ) $C9
UII_RESPONSE         = $DF1E ;  RESPONSE DATA REGISTER (READ ONLY)
UII_STATUS_DATA      = $DF1F ;  STATUS DATA REGISTER

;  KERNAL SUB ROUTINES
KERNAL_PRINT_HEX     = $BDCD ;  Print 16 bit number to screen LDX lobyte LDA hibyte

;  OTHER KERNAL STUFF
CURSOR_SET           = $E510
KERNAL_CLEAR_SCREEN  = $E544 ;  Clear Screen
KERNAL_IRQ_ENTRY     = $EA31

;  Serial BUS
SERIAL_TALK          = $ED09 ;  Send TALK command to serial bus. Input: A = Device number.
SERIAL_LISTEN        = $ED0C ;  Send LISTEN command to serial bus. Input: A = Device number.
SERIAL_FLUSH         = $ED40 ;  Flush serial bus output cache, at memory address $0095, to serial bus. Used registers: A.
SERIAL_LISTEN_2      = $EDB9	;  Send LISTEN secondary address to serial bus. Input: A = Secondary address.
SERIAL_TALK_2        = $EDC7	;  Send TALK secondary address to serial bus. Input: A = Secondary address.
SERIAL_WRITE_BYTE    = $EDDD ;  Write byte to serial bus. Input: A = Byte to write.
SERIAL_UNTALK        = $EDEF	;  Send UNTALK command to serial bus.
SERIAL_UNLISTEN      = $EDFE	;  Send UNLISTEN command to serial bus.
SERIAL_READ_BYTE     = $EE13	;  Read byte from serial bus. Output: A = Byte read.
SERIAL_CLOCK_OUT_HIGH= $EE85	;  Set CLOCK OUT to high.
SERIAL_CLOCK_OUT_LOW = $EE8E	;  Set CLOCK OUT to low.
SERIAL_DATA_OUT_HIGH = $EE97	;  Set DATA OUT to high.
SERIAL_DATA_OUT_LOW  = $EEA0	;  Set DATA OUT to low.
SERIAL_CLOCK_DATA_IN = $EEA9	;  Read CLOCK IN and DATA IN. Output: Carry = DATA IN; Negative = CLOCK IN; A = CLOCK IN (in bit #7).

;  KERNAL SUB ROUTINES
KERNAL_WAIT_KEY      = $F142 ;  Wait for key
KERNAL_SCINIT        = $FF81 ;  Input: – Output: – Used registers: A, X, Y
KERNAL_IOINIT        = $FF84 ;  Input: – Output: – Used registers: A, X
KERNAL_RAMTAS        = $FF87 ;  Input: – Output: – Used registers: A, X, Y
KERNAL_RESTOR        = $FF8A ;  Input: – Output: – Used registers: –
KERNAL_VECTOR        = $FF8D ;  Input: Carry: 0 = Copy user table into vector table, 1 = Copy vector table into user table; X/Y = Pointer to user table. Output: – Used registers: A, Y
KERNAL_SETMSG        = $FF90 ;  Input: A = Switch value. Output: – Used registers: –
KERNAL_LSTNSA        = $FF93 ;  Input: A = Secondary address Output: – Used registers: A
KERNAL_SECLSN        = $FF93 ;  Input: A = Secondary address Output: – Used registers: A
KERNAL_TALKSA        = $FF96 ;  Input: A = Secondary address Output: – Used registers: A
KERNAL_SECTLK        = $FF96 ;  Input: A = Secondary address Output: – Used registers: A
KERNAL_MEMBOT        = $FF99 ;  Input: Carry: 0 = Restore from input, 1 = Save to output; X/Y = Address (if Carry = 0) Output: X/Y = Address (if Carry = 1) Used registers: X, Y
KERNAL_MEMTOP        = $FF9C ;  Input: Carry: 0 = Restore from input, 1 = Save to output; X/Y = Address (if Carry = 0) Output: X/Y = Address (if Carry = 1) Used registers: X, Y
KERNAL_SCNKEY        = $FF9F ;  Input: – Output: – Used registers: A, X, Y
KERNAL_SETTMO        = $FFA2 ;  Input: A = Timeout value Output: – Used registers: –
KERNAL_IECIN         = $FFA5 ;  Input: – Output: A = Byte read Used registers: A
KERNAL_IECOUT        = $FFA8 ;  Input: A = Byte to write Output: – Used registers: –
KERNAL_UNTALK        = $FFAB ;  Input: – Output: – Used registers: A
KERNAL_UNLSTN        = $FFAE ;  Input: – Output: – Used registers: A
KERNAL_LISTEN        = $FFB1 ;  Input: A = Device number Output: – Used registers: A
KERNAL_TALK          = $FFB4 ;  Input: A = Device number Output: – Used registers: A
KERNAL_READST        = $FFB7 ;  Input: – Output: A = Device status Used registers: A
KERNAL_SETLFS        = $FFBA ;  Input: A = Logical number; X = Device number; Y = Secondary address Output: – Used registers: –
KERNAL_SETNAM        = $FFBD ;  Input: A = File name length; X/Y = Pointer to file name Output: – Used registers: –
KERNAL_OPEN          = $FFC0 ;  Input: – Output: – Used registers: A, X, Y
KERNAL_CLOSE         = $FFC3 ;  Input: A = Logical number Output: – Used registers: A, X, Y
KERNAL_CHKIN         = $FFC6	;  Input: X = Logical number Output: – Used registers: A, X
KERNAL_CHKOUT        = $FFC9 ;  Input: X = Logical number Output: – Used registers: A, X
KERNAL_CLRCHN        = $FFCC ;  Input: – Output: – Used registers: A, X
KERNAL_CHRIN         = $FFCF	;  Input: – Output: A = Byte read Used registers: A, Y
KERNAL_CHROUT        = $FFD2 ;  Input: A = Byte to write Output: – Used registers: –
KERNAL_LOAD          = $FFD5 ;  Input: A: 0 = Load, 1-255 = Verify; X/Y = Load address (if secondary address = 0) Output: Carry: 0 = No errors, 1 = Error; A = KERNAL error code (if Carry = 1); X/Y = Address of last byte loaded/verified (if Carry = 0) Used registers: A, X, Y
KERNAL_SAVE          = $FFD8 ;  Input: A = Address of zero page register holding start address of memory area to save; X/Y = End address of memory area plus 1 Output: Carry: 0 = No errors, 1 = Error; A = KERNAL error code (if Carry = 1) Used registers: A, X, Y
KERNAL_SETTIM        = $FFDB ;  Input: A/X/Y = New TOD value Output: – Used registers: –
KERNAL_RDTIM         = $FFDE	;  Input: – Output: A/X/Y = Current TOD value Used registers: A, X, Y
KERNAL_STOP          = $FFE1 ;  Input: – Output: Zero: 0 = Not pressed, 1 = Pressed; Carry: 1 = Pressed Used registers: A, X
KERNAL_GETIN         = $FFE4 ;  Input: – Output: A = Byte read Used registers: A, X, Y
KERNAL_CLALL         = $FFE7 ;  Input: – Output: – Used registers: A, X
KERNAL_UDTIM         = $FFEA ;  Input: – Output: – Used registers: A, X
KERNAL_SCREEN        = $FFED ;  Input: – Output: X = Number of columns (40); Y = Number of rows (25) Used registers: X, Y
KERNAL_PLOT          = $FFF0 ;  Input: Carry: 0 = Restore from input, 1 = Save to output; X = Cursor column (if Carry = 0); Y = Cursor row (if Carry = 0) Output: X = Cursor column (if Carry = 1); Y = Cursor row (if Carry = 1) Used registers: X, Y
KERNAL_IOBASE        = $FFF3 ;  Input: – Output: X/Y = CIA #1 base address ($DC00) Used registers: X, Y

;  KEYS (This is not MATRIX codes)
KEY_RETURN       = $0d ; Carriage Return, ASCII 13
KEY_HOME         = $13
KEY_DELETE       = $14
KEY_SPACE        = $20
KEY_DOLLAR_SIGN  = $24
KEY_ASTERISK     = $2a
KEY_MINUS        = $2d
KEY_PLUS         = $2b
KEY_COLON        = $3a
KEY_SEMICOLON    = $3b
KEY_1            = $31
KEY_2            = $32
KEY_3            = $33
KEY_4            = $34
KEY_5            = $35
KEY_6            = $36
KEY_7            = $37
KEY_8            = $38
KEY_9            = $39
KEY_EQUAL        = $3d
KEY_A            = $41
KEY_B            = $42
KEY_C            = $43
KEY_D            = $44
KEY_E            = $45
KEY_F            = $46
KEY_G            = $47
KEY_H            = $48
KEY_I            = $49
KEY_J            = $4a
KEY_K            = $4b
KEY_L            = $4c
KEY_M            = $4d
KEY_N            = $4e
KEY_O            = $4f
KEY_P            = $50
KEY_Q            = $51
KEY_R            = $52
KEY_S            = $53
KEY_T            = $54
KEY_U            = $55
KEY_V            = $56
KEY_W            = $57
KEY_X            = $58
KEY_Y            = $59
KEY_Z            = $5a
KEY_F1           = $85
KEY_F2           = $89
KEY_F3           = $86
KEY_F4           = $8a
KEY_F5           = $87
KEY_F6           = $8b
KEY_F7           = $88
KEY_F8           = $89
KEY_CURSOR_UP    = $91
KEY_CURSOR_DOWN  = $11
KEY_CURSOR_LEFT  = $9d
KEY_CURSOR_RIGHT = $1d
KEY_CLEAR        = $93