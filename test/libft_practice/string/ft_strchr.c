#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	if ((char)c == '\0')
		return (str + strlen(str));
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "Hello world my name is basil.";
	char	to_find = 'w';

	printf("%s\n", ft_strchr(str, to_find));
	return (0);
}
