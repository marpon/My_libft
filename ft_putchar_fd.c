

#include <unistd.h>

/*
** Prints the character c on the specified filedescriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
