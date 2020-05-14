#include "monty.h"
/**
 * handle_monty - opens and reads monty file line by line
 * Description: opens and reads monty file line by line
 * @filename: monty filename
 * @stack: stack to work with
 * Return: nothing
 */

void handle_monty(char *filename, stack_t **stack)
{
	FILE *monty = fopen(filename, "r");
	unsigned int line_number = 0;
	char *buffer;
	size_t bufsize = 0;
	char **args = NULL;

	if (monty == NULL)
	{
		fprintf(stderr, "Error: Can't open file, %s\n", filename);
		exit(EXIT_FAILURE);
	}
	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	while (getline(&buffer, &bufsize, monty) != -1)
	{
		line_number++;
		args = tokenline(buffer);
		work_line(args, stack, line_number);
	}
	free(buffer);
	fclose(monty);
}
