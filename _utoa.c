#include "main.h"

/**
 * _utoa - converts unsigned int to string in given base
 */
char *_utoa(unsigned int num, int base)
{
static char buffer[50];
char *ptr = &buffer[49];

*ptr = '\0';

if (num == 0)
{
*--ptr = '0';
return (ptr);
}

while (num)
{
int rem = num % base;
*--ptr = (rem < 10) ? rem + '0' : rem - 10 + 'A';
num /= base;
}

return (ptr);
}

/* _lcutoa - lowercase version for hex */
char *_lcutoa(unsigned int num, int base)
{
static char buffer[50];
char *ptr = &buffer[49];

*ptr = '\0';

if (num == 0)
{
*--ptr = '0';
return (ptr);
}

while (num)
{
int rem = num % base;
*--ptr = (rem < 10) ? rem + '0' : rem - 10 + 'a';
num /= base;
}

return (ptr);
}
