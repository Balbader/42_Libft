#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	dst[] = "Hello World How Are You?";

	ft_memset(dst, 'r', 10);
	printf("%s\n", dst);
	printf("%ld\n", strlen(dst));
	return (0);
}
