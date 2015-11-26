

#include <string.h>
#include "libft.h"

/*
** Compares s1 and s2 up to n characters max, or the first '\0'.
** If both strings are equal, return 1, else 0.
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
	return (0);
}
