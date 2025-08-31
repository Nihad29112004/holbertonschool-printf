#include "main.h"

/**
 * _itoa - converts integer to string
 * @n: integer
 * @buffer: buffer to store string
 * Return: pointer to buffer
 */
char *_itoa(int n, char *buffer)
{
int i = 0, sign = n;
unsigned int num;

if (n < 0)
num = -n;
else
num = n;

do {
buffer[i++] = (num % 10) + '0';
num /= 10;
} while (num);

if (sign < 0)
buffer[i++] = '-';

buffer[i] = '\0';

for (int j = 0, k = i - 1; j < k; j++, k--)
{
char tmp = buffer[j];
buffer[j] = buffer[k];
buffer[k] = tmp;
}

return (buffer);
}

/**
 * print_int - prints an integer (%d, %i)
 * @args: va_list containing the integer
 * Return: number of characters printed
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
char buffer[20];

_itoa(n, buffer);

int count = 0;
for (int i = 0; buffer[i]; i++)
count += _putchar(buffer[i]);

return (count);
}
