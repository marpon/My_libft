

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alloc;

	alloc = malloc(size);
	if (alloc)
		alloc = ft_memset(alloc, 0, size);
	return (alloc);
}
