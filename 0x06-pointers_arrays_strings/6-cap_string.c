#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 * Return: length as integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string to capitalize
 * Return: s adress
 */
char *cap_string(char *str)
{
	int index = 0;
	
	while (str[++index])
	{
		while (!(str[undex] >= '0') && (str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ','||
				str[index - 1] == ';'||
				str[index - 1] == '.'||
				str[index - 1] == '!'||
				str[index - 1] == '?'||
				str[index - 1] == '"'||
				str[index - 1] == '('||
				str[index - 1] == ')'||
				str[index - 1] == '{'||
				str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}
