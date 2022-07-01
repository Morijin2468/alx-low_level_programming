#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - assign any number to the variable n when it's executed and prints out
 * based a condition
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
