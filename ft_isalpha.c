

#include "libft.h"

/*
** The isalpha() function tests for any character for which isupper() or
** islower() is true.  The value of the argument must be representable as an
** unsigned char or the value of EOF.
*/

int ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
