#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (((char *)needle)[j] == '\0')
		return ((char *)haystack);
	while (((char *)haystack)[i] && i < len)
	{
		while (((char *)haystack)[i] == ((char *)needle)[j])
		{
			i++;
			j++;
		}
		i++;
	}
	return ((char *)haystack + i);
}

int	main(void)
{
	const char *haystack = "Hello how are you?";
	const char *needle = "how";
	// const char *needle = "";

	printf("%s\n", ft_strnstr(haystack, needle, 10));
	printf("%s\n", strnstr(haystack, needle, 10));
	return (0);
}
