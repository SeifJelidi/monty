#include "monty.h"
/**
 * tokenline - splits a line into tokens and stores them into a string array
 * Description: splits a line into tokens and stores them into a string array
 * @line: line string to split.
 * Return: array of the strings.
 */

char **tokenline(char *line)
{
	char **tokens;
	char *token;
	int i, token_num = 0, k = 0;
	char delims[] = " \t\n $";

	if (line == NULL)
		return (NULL);
	for (i = 0 ; line[i] != '\0' ; i++)
	{
		if (line[i] == ' ')
			token_num++;
	}
	tokens = malloc(sizeof(char *) * (token_num + 1));
	if (tokens == NULL)
	{
		free(tokens);
		return (NULL);
	}
	token = strtok(line, delims);
	while (token != NULL)
	{
		tokens[k] = malloc(sizeof(char) * (_strlen(token) + 1));
		_strcpy(tokens[k], token);
		token = strtok(NULL, delims);
		k++;
	}
	tokens[k] = NULL;
	return (tokens);
}
