#include "main.h"

/**
 * _printf - custom printf implementation
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0;
char buffer[1024];
int buf_index = 0;

specifier_t specifiers[] = {
{'c', print_char}, {'s', print_string}, {'%', print_percent},
{'d', print_int}, {'i', print_int}, {'b', print_binary},
{'u', print_unsigned}, {'o', print_octal},
{'x', print_hex}, {'X', print_HEX},
{'p', print_pointer}, {'S', print_S},
{'r', print_rev}, {'R', print_rot13},
{'\0', NULL}
};

if (!format)
return (-1);

va_start(args, format);

while (format[i])
{
if (format[i] == '%')
{
i++;
if (!format[i])
break;

int j = 0;
while (specifiers[j].symbol)
{
if (format[i] == specifiers[j].symbol)
{
buf_index += specifiers[j].func(&buffer[buf_index], args);
break;
}
j++;
}

if (!specifiers[j].symbol)
buffer[buf_index++] = format[i];

if (buf_index >= 1024)
{
write(1, buffer, buf_index);
count += buf_index;
buf_index = 0;
}
}
else
{
buffer[buf_index++] = format[i];
if (buf_index >= 1024)
{
write(1, buffer, buf_index);
count += buf_index;
buf_index = 0;
}
}
i++;
}

if (buf_index > 0)
{
write(1, buffer, buf_index);
count += buf_index;
}

va_end(args);
return (count);
}

