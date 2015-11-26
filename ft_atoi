

#include "libft.h"

/*
** Discards any whitespace characters until first non-whitespace character is
** found. Then takes as many characters as possible to form a valid integer
** number representation and converts them to integer value.
*/

int	ft_atoi(const char *str)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (str[0] > 47 && str[0] < 58)
	{
		value = value * 10 + (str[0] - 48);
		str++;
	}
	return (value * sign);
}
