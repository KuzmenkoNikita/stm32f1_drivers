PROGRAM=bare
CC= arm-none-eabi-gcc
OBJ_DIR	= __obj
OUTPUT_DIR	= bin

SOURCES=main.c \
		system_stm32f1xx.c \
		

STARTUPFILE = startup_md.S

STARTUPOBJ = $(notdir $(STARTUPFILE))
STARTUPOBJ := $(patsubst %.S, $(OBJ_DIR)/%.o, $(STARTUPOBJ))
OBJECTS	= $(patsubst %.c, $(OBJ_DIR)/%.o, $(SOURCES))
OBJECTS += $(STARTUPOBJ)


TARGET_FLAGS=\
	--specs=nosys.specs\
	-mcpu=cortex-m3\
	-mthumb\
	-mlittle-endian\
	-mfloat-abi=soft\
	-mthumb-interwork

CFLAGS=\
	-g -Wall -Wextra -Werror\
	$(TARGET_FLAGS)\

LDFLAGS=\
	$(TARGET_FLAGS)\
	-Wl,-script="./stm32f103c8t6.ld"

$(OBJ_DIR)/%.o: %.S
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(PROGRAM): $(OBJ_DIR) | $(OUTPUT_DIR) $(OBJECTS)  
	$(CC) $(LDFLAGS) -o $(OUTPUT_DIR)/$@ $(OBJECTS)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OUTPUT_DIR):
	@mkdir $(OUTPUT_DIR)

clean:
	rm -r $(OBJ_DIR) $(OUTPUT_DIR)

.PHONY: clean