#include "main.h"

/**
 * cap_string - capitalises 1st letter of all words in string
 * @s: string
 * Return: string whose words' 1st letters are caps
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
				&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
				 s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
				 s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
				 s[i - 1] == '}' || s[i - 1] == ' ' ||
				 s[i - 1] == '\t' || s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
