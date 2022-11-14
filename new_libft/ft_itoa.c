/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:21:27 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/09 14:21:29 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

static int	ft_get_len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_not_zero(int n)
{
	int		len;
	long	nb;
	char	*str;

	nb = n;
	len = ft_get_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		if (!str)
			return (NULL);
		str[n] = '0';
	}
	else
		str = ft_not_zero(n);
	return (str);
}

int main() {
	// printf("%s\n", ft_itoa(INT_MAX));
	// printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(1));
	// printf("%s\n", ft_itoa(-1));
	// printf("%s\n", ft_itoa(42));
	return (0);
}
