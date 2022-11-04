#include <stdio.h>
#include <stdlib.h>

int		ft_get_len(long nb)
{
	int	len;
	len = 0;

	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_check_nb(long nb, char *str)
{
	if (nb == 0)
		str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_get_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	ft_check_nb(nb, str);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-214748));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
