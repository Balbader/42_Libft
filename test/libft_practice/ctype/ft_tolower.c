int	ft_tolower(int c)
{
	unsigned char	test;

	test = c;
	if (test >= 'A' && test <= 'Z')
		return (test += 32);
	return (0);
}
