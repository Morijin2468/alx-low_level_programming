#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - prints all the numbers of base 16 in lowercase, then a new line
 * Return: Always 0
 */
int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
