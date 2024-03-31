PROJECT = pwm
BUILD_DIR = bin


SHARED_DIR = ../shared
CFILES = firmware.c
CFILES += system.c
CFILES += shared_api.c

# WARNING: change this according to your device. I have a Chinese BlackPill copy
DEVICE=stm32f411ceu6

# WARNING: not sure what I am doing; see https://github.com/arduino/OpenOCD/blob/master/tcl/board/stm32f4discovery.cfg
OOCD_FILE = board/stm32f4discovery.cfg

# You shouldn't have to edit anything below here.
VPATH += $(SHARED_DIR)
INCLUDES += $(patsubst %,-I%, . $(SHARED_DIR))
OPENCM3_DIR=../libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include ../rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk