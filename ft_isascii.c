

/*
** The isascii() function tests for an ASCII character,
** which is any character between 0 and 127 inclusive.
*/

int ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
