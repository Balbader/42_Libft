#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if ((!(unsigned char *)s1 || !(unsigned char *)s2))
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (str1[i] == '\0' && str2[i] == '\0')
		return (0);
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

int	main(void)
{
	unsigned char	str1[] = "";
	unsigned char	str2[] = "";

	printf("%d\n", ft_memcmp(str1, str2, 11));
	return (0);
}
