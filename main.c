#include "monty.h"
/**
 * main - entry point
 * Description: entry point of the program
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	handle_monty(argv[1]);
	return (0);
}
