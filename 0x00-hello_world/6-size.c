#include <stdio.h>

int main(void)
{

char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of an char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
printf("Size of an long int: %lu.\n", (unsigned long)sizeof(li));
printf("Size of an long long int: %lu.\n", (unsigned long)sizeof(lli));
printf("Size of an float is: %lu.\n", (unsigned long)sizeof(f));

return (0);

}
