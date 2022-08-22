/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:09:28 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/22 19:34:28 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_split(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char c, char const *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
		{
			count++;
			while (s[i] != '\0' && s[i + 1] == c)
				i++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;

	if (!s || !c)
		return (NULL);
	count = ft_count_words(c, s);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "       Hello world, how       are you today?  	";
	int		tot_count;

	tot_count = ft_count_words(' ', str);
	printf("%d\n", tot_count);
	return (0);
}
