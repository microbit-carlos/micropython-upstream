/*
    GNU linker script for NRF52833
*/

_flash_size = 512K;
_ram_size   = 128K;

/* produce a link error if there is not this amount of RAM for these sections */
_stack_size = 8K;
_minimum_heap_size = 64K;
