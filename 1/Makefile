# Makefile for compile each file with extension '.asm' in './src', run `cl65 -t c64 -C c64-asm.cfg -u __EXEHDR__ ./src/<SOURCE_FILE>.asm  -o build/<BINARY>.prg`

SRC_DIR = ./src
BUILD_DIR = ./build

.SILENT:

ASM_FILES = $(wildcard $(SRC_DIR)/*.asm)
all : $(ASM_FILES)
	for f in $^; do  \
		F_NODIR=$${f##*/}; \
		F_NODIR_NOEXT=$${F_NODIR%.*}; \
		echo "Compiling $$f to $(BUILD_DIR)/$${F_NODIR_NOEXT}.prg" ; \
		cl65 -t c64 -C c64-asm.cfg -u __EXEHDR__ "$$f" -o $(BUILD_DIR)/$${F_NODIR_NOEXT}.prg ; \
	done