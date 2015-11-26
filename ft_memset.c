/*
** Writes len bytes of value c (converted to an unsigned char) to the string b.
** The function returns its first argument.
*/

void *ft_memset(void *b, int c, size_t len)
{
	while (len)
	{
		((char *)b)[len] = (unsigned char)c;
		len--;
	}
	return (b);
}
