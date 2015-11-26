

#include <unistd.h>
#include "libft.h"

/*
** Print the string s on standard output.
*/

void	ft_putstr(char const *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}
