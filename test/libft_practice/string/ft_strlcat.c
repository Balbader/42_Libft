#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	return (*dst);
}

int	main(void)
{
	char	*src = ", my name is balou.";
	char	*dst = "Hello world";

	printf("before: %s\n", dst);
	ft_strlcat(dst, src, strlen(dst));
	printf("after: %s\n", dst);
	return (0);
}
