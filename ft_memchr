

#include <string.h>

/*
** Locates the 1st occurrence of c (converted to an unsigned char) in string s.
*/

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)s;
	if (s && n > 0)
		while (i < n)
		{
			if (cpy[i] == (unsigned char)c)
				return ((void*)&cpy[i]);
			i++;
		}
	return (NULL);
}



