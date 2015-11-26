
void	ft_striter(char *s, void (*f)(char *))
{
	if (s && *s && f && *f)
		while (*s)
			f(s++);
}
