# STM32BareMetalLearningRepo
Learning STM32 Bare Metal

# Building

0. Have a `arm-none-eabi-gcc` toolchain, `python3`, `make`.
1. Init `libopencm3` module with `git submodule update --init`.
2. Compile submodule with `cd libopencm && make && cd ..`.
3. Make specific module, e.g. `cd blink && make clean && make`.
4. Flash with `st-flash write my_training_proj.bin 0x8000000`.
