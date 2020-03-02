#include <stdio.h>
#include <stdlib.h>

/**
 * main - addicion of numbers
 * @argc: argc
 * @argv: argv
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
