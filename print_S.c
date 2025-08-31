#include "main.h"

/**
 * print_S - prints a string and non-printable chars as \xHH
 * @args: va_list containing the string
 * Return: number of characters printed
 */
int print_S(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

if (!str)
str = "(null)";

for (int i = 0; str[i]; i++)
{
if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
{
count += _putchar('\\');
count += _putchar('x');
count += print_HEX_char((unsigned char)str[i]);
}
else
count += _putchar(str[i]);
}

return (count);
}
