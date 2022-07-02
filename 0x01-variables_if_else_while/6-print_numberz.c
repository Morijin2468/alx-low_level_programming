#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - prints all single digit numbers of base 10 from 0,starts a new line
 * Return: Always 0
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
putchar(10);
}
