#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary
 * @args: va_list containing the unsigned int
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
char buffer[32];
int i = 0, count = 0;

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
buffer[i++] = (n % 2) + '0';
n /= 2;
}

for (int j = i - 1; j >= 0; j--)
count += _putchar(buffer[j]);

return (count);
}
