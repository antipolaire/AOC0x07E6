# Makefile for compile each file with extension '.asm' in './src', run `cl65 -t c64 -C c64-asm.cfg -u __EXEHDR__ ./src/<SOURCE_FILE>.asm  -o build/<BINARY>.prg`

SRC_DIR = ./src
BUILD_DIR = ./build

.SILENT:

ALL_ASM = $(wildcard $(SRC_DIR)/*.asm)
ALL_C = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*.h)

all: clean asm c

asm : $(ALL_ASM)
	for f in $^; do  \
		F_NODIR=$${f##*/}; \
		F_NODIR_NOEXT=$${F_NODIR%.*}; \
		echo "Compiling $$f to $(BUILD_DIR)/$${F_NODIR_NOEXT}.prg" ; \
		cl65 -t c64 -C c64-asm.cfg -u __EXEHDR__ "$$f" -o $(BUILD_DIR)/$${F_NODIR_NOEXT}.prg ; \
	done

c: $(ALL_C)
	for f in $^; do  \
		F_NODIR=$${f##*/}; \
		F_NODIR_NOEXT=$${F_NODIR%.*}; \
		echo "Compiling $$f to $(BUILD_DIR)/$${F_NODIR_NOEXT}.prg" ; \
		cl65 -t c64 -O -o $(BUILD_DIR)/$${F_NODIR_NOEXT}.prg "$$f" ; \
	done

clean:
	rm -f $(BUILD_DIR)/*.prg