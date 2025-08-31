#include "main.h"

/**
 * _itoa - converts int to string in given base
 */
char *_itoa(int num, int base)
{
static char buffer[50];
char *ptr = &buffer[49];
int is_negative = 0;
unsigned int n;
*ptr = '\0';

if (num == 0)
{
*--ptr = '0';
return (ptr);
}

if (num < 0 && base == 10)
{
is_negative = 1;
n = -num;
}
else
n = num;

while (n)
{
int rem = n % base;
*--ptr = (rem < 10) ? rem + '0' : rem - 10 + 'a';
n /= base;
}

if (is_negative)
*--ptr = '-';

return (ptr);
}
