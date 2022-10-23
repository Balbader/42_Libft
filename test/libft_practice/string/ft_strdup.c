#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main(void)
{
	// char	*s1 = "Hello World";
	char	*s1 = "\0";
	char	*dup;

	dup = ft_strdup(s1);
	printf("%s\n", dup);
	return (0);
}
