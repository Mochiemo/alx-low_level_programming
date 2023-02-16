#include <stdio.h>
/**
 * main - entry
 * Ruturn: always 1
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float f;
	
printf("Size of a char: %l1 byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %l4 byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %l8 byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %l8 byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %l4 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}


