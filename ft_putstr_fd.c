

#include <unistd.h>
#include "libft.h"

/*
** Prints the string s on the specified file descriptor
*/

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
