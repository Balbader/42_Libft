#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (0);
	j = 0;
	while (dst[j])
		j++;
	i = 0;
	while (src[i] && i < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (strlen(dst) + strlen(src));
}

int	main(void)
{
	char	*src = ", my name is balou.";
	char	dst[50] = "Hello world";

	printf("before: %s\n", dst);
	ft_strlcat(dst, src, strlen(src));
	printf("after: %s\n", dst);
	return (0);
}
