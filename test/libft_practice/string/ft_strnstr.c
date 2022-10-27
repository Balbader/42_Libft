#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (((char *)haystack)[i])
	{
		while (((char *)haystack)[i] == ((char *)needle)[j])
		{
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
