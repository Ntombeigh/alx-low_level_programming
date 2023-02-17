#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Positive numbers and 0 are to be printed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}


