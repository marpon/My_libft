

#include "libft.h"

/*
** Compare s1 and s2. If both strings are equal, returns 0, else returns 1.
** The comparison is done lexicographically.
*/

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		if (!ft_strcmp(s1, s2))
			return (1);
	return (0);
}
