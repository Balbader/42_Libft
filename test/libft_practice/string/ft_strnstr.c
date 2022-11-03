#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	
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

