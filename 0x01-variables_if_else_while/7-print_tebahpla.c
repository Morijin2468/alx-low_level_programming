#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Return: Always (0)
 */
int main(void)
{
int ch;
for (ch = 122; ch >= 97; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
