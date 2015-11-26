

#include <string.h>

/*
** Computes the length of the string s, and returns the number of
** characters that precede the terminating NUL character.
*/

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
