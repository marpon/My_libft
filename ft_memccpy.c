

#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t bytes;

	bytes = 0;
	while (bytes < n)
	{
		*((unsigned char *)dst + bytes) = *((unsigned char *)src + bytes);
		if (*((unsigned char *)src + bytes) == (unsigned char)c)
			return ((unsigned char *)dst + bytes + 1);
		bytes++;
	}
	return (NULL);
}
