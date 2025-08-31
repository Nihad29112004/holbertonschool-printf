#include "main.h"

/**
 * print_HEX - prints an unsigned int in hexadecimal (uppercase)
 * @args: va_list containing the unsigned int
 * Return: number of characters printed
 */
int print_HEX(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
char buffer[32];
int i = 0, count = 0;
char *HEX = "0123456789ABCDEF";

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
buffer[i++] = HEX[n % 16];
n /= 16;
}

for (int j = i - 1; j >= 0; j--)
count += _putchar(buffer[j]);

return (count);
}
