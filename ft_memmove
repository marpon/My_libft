

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	void	*tmp;

	if (dst && src)
	{
		if ((tmp = malloc(len)) == NULL)
			return (NULL);
		ft_memcpy(tmp, src, len);
		ft_memcpy(dst, tmp, len);
		free(tmp);
	}
	return (dst);
}
