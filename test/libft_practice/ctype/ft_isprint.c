int	ft_isprintf(int c)
{
	unsigned char	test;

	test = c;
	if (test >= 32 && test < 127)
		return (1);
	return (0);
}
