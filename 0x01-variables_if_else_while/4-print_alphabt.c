#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Always (0)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
if (ch != 113 && ch != 101)
{
putchar(ch);
}
putchar(10);
return (0);
}
