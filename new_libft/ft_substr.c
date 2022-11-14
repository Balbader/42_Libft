/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:02:58 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/08 15:03:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	if (len > ft_strlen(s) && start <= ft_strlen(s))
		new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
// #include <stdio.h>

// int main() {

// 	printf("test 1 - 2 :%s\n", ft_substr("tripouille", 0, 42000));
// 	printf("test 3 - 4 :%s\n", ft_substr("tripouille", 1, 1));
// 	printf("test 5 - 6 :%s\n", ft_substr("tripouille", 100, 1));
// 	printf("test 7 - 8 :%s\n", ft_substr("1", 42, 42000000));
// 	printf("test 9 - 10:%s\n", ft_substr("0123456789", 9, 10));
// 	printf("test 11 -12:%s\n", ft_substr("42", 0, 0));
// 	printf("test 13 -14:%s\n", ft_substr("BONJOUR LES HARICOTS!", 8, 14));
// 	printf("test 15 -16:%s\n", ft_substr("test", 1, 2));
// 	return (0);
// }
