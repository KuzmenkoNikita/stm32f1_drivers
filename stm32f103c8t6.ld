/* Linker script for ST STM32F103C8T6 */

/* Define the entry point of the output file. */
ENTRY(Reset_Handler)

MEMORY
{
	FLASH(rx) 	: ORIGIN = 0x08000000, LENGTH = 64K
	RAM(rwx) 	: ORIGIN = 0x20000000, LENGTH = 20K
}

_estack = ORIGIN(RAM) + LENGTH(RAM);

/* Define sections. */
SECTIONS
{
	.isr_vector :
	{
		. = ALIGN(4);
		KEEP(*(.isr_vector))
		. = ALIGN(4);
	} >FLASH

	.text : 
	{
		. = ALIGN(4);
		*(.text)	
		*(.text*)	
	} >FLASH

	_sidata = LOADADDR(.data);

	.data : 
	{
		. = ALIGN(4);
		_sdata = .;
		*(.data)
		*(.data*)
		. = ALIGN(4);
		_edata = .;
	} >RAM AT >FLASH

	. = ALIGN(4);
	.bss : 
	{
		_sbss = .;
		__bss_start__ = _sbss;
		*(.bss)
		*(.bss*)	
		*(COMMON)
		. = ALIGN(4);
		_ebss = .;
		__bss_end__ = _ebss;
	} >RAM
}