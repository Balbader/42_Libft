#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (0);
	
	/******************************************************/
	/* can this work ??*/
	dst = (char *)malloc(sizeof(char) * (strlen(src) + 1));
	if (!dst)
		return (0);
	/******************************************************/

	i = 0;
	j = 0;
	while (src[i] && i < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (strlen(src));
}

int	main(void)
{
	char	*src = "Hello World";
	char	*dst = NULL;

	ft_strlcpy(dst, src, 7);
	printf("%s\n", dst);
	printf("%ld\n", ft_strlcpy(dst, src, 7));
	return (0);
}
