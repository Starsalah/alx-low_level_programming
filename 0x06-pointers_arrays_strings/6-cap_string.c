#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string based on specified separators
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	int capitalize_next = 1;
	int i;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			if (capitalize_next)
			{
				str[i] = toupper(str[i]);
				capitalize_next = 0;
			}
		}
	}

	return (str);
}
