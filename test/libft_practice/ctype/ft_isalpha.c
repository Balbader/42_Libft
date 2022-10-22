int	ft_isalpha(int c)
{
	unsigned char	test;

	test = c;
	if ((test >= 'A' && test <= 'Z') || (test >= 'a' && test <= 'z'))
		return (1);
	return (0);
}
