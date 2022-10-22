int	ft_tolower(int c)
{
	unsigned char	test;

	test = c;
	if (test >= 'a' && test <= 'z')
		return (test -= 32);
	return (0);
}
