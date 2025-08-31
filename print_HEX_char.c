#include "main.h"

/**
 * print_HEX_char - prints a byte as 2-digit uppercase hex
 */
int print_HEX_char(unsigned char c)
{
int count = 0;
char hex[3];

hex[0] = "0123456789ABCDEF"[c / 16];
hex[1] = "0123456789ABCDEF"[c % 16];
hex[2] = '\0';
count += _putchar(hex[0]);
count += _putchar(hex[1]);

return (count);
}
