
#include <string.h>

/*
** Compares at most n characters of two null-terminated byte strings.
** The comparison is done lexicographically.
** Returns a positive if s1 > s2 ; negative if s1 < s2 ; zero if equal.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s2[i] == '\0')
			return (1);
		if (s1[i] != s2[i])
			return ((s1[i] > s2[i]) ? 1 : -1);
		i++;
	}
	if (s2[i] != '\0' && i != n)
		return (-1);
	return (0);
}
