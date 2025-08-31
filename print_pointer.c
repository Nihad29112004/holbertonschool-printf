#include "main.h"

/**
 * print_pointer - prints a pointer address in hexadecimal
 * @args: va_list containing the pointer
 * Return: number of characters printed
 */
int print_pointer(va_list args)
{
void *ptr = va_arg(args, void *);
unsigned long int n = (unsigned long int)ptr;
char buffer[32];
int i = 0, count = 0;
char *hex = "0123456789abcdef";

count += _putchar('0');
count += _putchar('x');

if (n == 0)
return count + _putchar('0');

while (n > 0)
{
buffer[i++] = hex[n % 16];
n /= 16;
}

for (int j = i - 1; j >= 0; j--)
count += _putchar(buffer[j]);

return (count);
}
