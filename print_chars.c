#include "main.h"

/**
 * print_char - prints a single character
 * @args: va_list containing the char
 * Return: number of characters printed
 */
int print_char(va_list args)
{
int c = va_arg(args, int);

return (_putchar(c));
}

/**
 * print_string - prints a string
 * @args: va_list containing the string
 * Return: number of characters printed
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

if (!str)
str = "(null)";

for (int i = 0; str[i]; i++)
count += _putchar(str[i]);

return (count);
}

/**
 * print_percent - prints a '%' character
 * @args: va_list (unused)
 * Return: number of characters printed
 */
int print_percent(va_list args)
{
(void) args;
return (_putchar('%'));
}
