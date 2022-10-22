#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	to_find;
	unsigned char	*str;
	size_t			i;

	to_find = c;
	str = (unsigned char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == to_find)
			return (str + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "Hello World my name is basil.";
	char	to_find = 'n';
	char	*ret;

	ret = ft_memchr(str, to_find, 10);
	printf("%s\n", ret);
	return (0);
}
