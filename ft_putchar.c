

#include <unistd.h>

/*
** Prints the character c on standard output.
*/

void	ft_putchar(char c)
{
	if (c != '\0')
		write(1, &c, 1);
}
