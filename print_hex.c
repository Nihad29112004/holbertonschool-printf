#include "main.h"

/**
 * print_hex - prints an unsigned int in hexadecimal (lowercase)
 * @args: va_list containing the unsigned int
 * Return: number of characters printed
 */
int print_hex(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
char buffer[32];
int i = 0, count = 0;
char *hex = "0123456789abcdef";

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
buffer[i++] = hex[n % 16];
n /= 16;
}

for (int j = i - 1; j >= 0; j--)
count += _putchar(buffer[j]);

return (count);
}
