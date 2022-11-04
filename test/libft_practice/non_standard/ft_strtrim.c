#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_check_char(char c, char *trim)
{
	int	i;

	i = 0;
	while (trim[i])
	{
		if (c == trim[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_trim_len(char *str, char *trim)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (ft_check_char(str[i], trim))
			len++;
		i++;
	} return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len_to_trim;
	int		i;
	int		j;

	len_to_trim = ft_trim_len((char *)s1, (char *)set);
	str = (char *)malloc(sizeof(char) *
					  (strlen((char *)s1) - len_to_trim) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (ft_check_char(((char *)s1)[i], ((char *)set)))
		i++;
	return (str);
}

int	main(void)
{
	char 	*str = "abcabcabc Hello world abcabcabc";
	char	*trim = "abc ";
	char	*res;
	int		len_to_trim;

	len_to_trim = ft_trim_len(str, trim);
	printf("%d\n", len_to_trim);
	res = ft_strtrim(str, trim);
	printf("%s\n", res);
	return (0);
}
