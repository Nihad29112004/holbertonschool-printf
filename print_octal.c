#include "main.h"

/**
 * print_octal - prints an unsigned integer in octal
 * @args: va_list containing the unsigned int
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
char buffer[32];
int i = 0, count = 0;

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
buffer[i++] = (n % 8) + '0';
n /= 8;
}

for (int j = i - 1; j >= 0; j--)
count += _putchar(buffer[j]);

return (count);
}
