#include <stddef.h>
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	needle;
	char			*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	needle = c;
	i = strlen(str);
	while (i > 0)
	{
		if (str[i] == needle)
			return (str + i);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char 	*str = "Hello world uhuu, uhuu, hola como estas uhuu, me too !!!";
	int		needle = 'u';

	printf("%s\n", ft_strrchr(str, needle));
	return (0);
}
