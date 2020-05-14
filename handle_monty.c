#include "monty.h"
/**
 * handle_monty - opens and reads monty file line by line
 * Description: opens and reads monty file line by line
 * @filename: monty filename
 * Return: nothing
 */

void handle_monty(char *filename)
{
	stack_t *stack = NULL;
	FILE *monty = fopen(filename, "r");
	unsigned int line_number = 1;
	char *buffer;
	size_t bufsize = 0;
	char *args = NULL;
	char *cm2 = NULL;


	if (monty == NULL)
	{
		fprintf(stderr, "Error: Can't open file, %s\n", filename);
		exit(EXIT_FAILURE);
	}
	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &bufsize, monty) != -1)
	{
		line_number++;
		args = strtok(buffer, "\n\t ");
		cm2 = strtok(NULL, "\n\t ");
		work_line(args, &stack, line_number, cm2);
	}
	free(buffer);
	fclose(monty);
}
