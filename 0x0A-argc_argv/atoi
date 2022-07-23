#include "main.h"

/**
 * this_is_zero - check if num is valid 0
 * @num: string of zeros
 *
 * Return: ISZERO ? 1 : 0
 */

int this_is_zero(char *num)
{
	int i;

	for (i = 0; num[i] != END ; i++)
	{
		if (num[i] != '0')
			return (0);
	}

	return (1);
}

/**
 * main - Entry point
 * @argc: number of params
 * @argv: array of params
 *
 * Return: SUCCESS ? 0 : 1
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	while (i < argc)
	{
		if ((!atoi(argv[i]) && !this_is_zero(argv[i])) || atoi(argv[i]) < 0)
			goto ERROR;

		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);

ERROR:	printf("Error\n");
	return (1);
}
