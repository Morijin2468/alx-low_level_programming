#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign any number to the variable n when it is executed
 * stores different value
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("8 and is greater than 5\n");
}
if (n == 0)
{
printf("0 and is 0\n");
}
if (n < 6)
{
printf("-8 and is less than 6 and not 0\n");
}
printf("\n");
return (0);
}
