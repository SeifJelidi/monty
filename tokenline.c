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

/**
 * _strlen - give the lenght of a string
 *@s: int pointer type variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);

}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char type array pointer
 * @src: char type integer variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

