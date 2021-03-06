

#include "libft.h"

/*
** Appends a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating '\0'.
** The string s1 must have sufficient space to hold the result.
*/

char *ft_strcat(char *s1, const char *s2)
{
	size_t	len;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}
