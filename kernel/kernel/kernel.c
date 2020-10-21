#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("Hello, kernel World!\n");

	char* str = "Test-var";

	printf("Test with var: %s\n", str);
}
