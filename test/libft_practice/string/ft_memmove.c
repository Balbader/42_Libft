#include "ft_memcpy.c"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*temp;

	temp = (unsigned char *)malloc(sizeof(unsigned char) * (len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		temp[i] = ((char *)src)[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = temp[i];
		i++;
	}
	free(temp);
	((unsigned char *)dst)[i] = '\0';
	return (dst);
}

int	main(void)
{
	char	src[50] = "I am going from Delhi to Gorakhpur";
	// char	dst[50] = "I am going from Delhi to Gorakhpur";

	// ft_memmove(dst + 11, src + 5, 29);
	printf("ft_memmove: %s\n", (char *)ft_memmove(src + 11, src + 5, 29));

	// ft_memcpy(dst + 11, src + 5, 29);
	printf("ft_memcpy: %s\n", (char *)ft_memcpy(src + 11, src + 5, 29));
	return (0);
}
