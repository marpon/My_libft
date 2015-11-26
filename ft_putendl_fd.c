

#include "libft.h"

/*
** Prints the string s to the file descriptor fd, followed by a '\n'.
*/

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
