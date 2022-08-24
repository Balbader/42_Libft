/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:09:28 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/24 08:59:17 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
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

int	*ft_strs_len(char const *s, char c)
{
	int	*strs_len;
	int	str_len;
	int	i;
	int	j;

	strs_len = (int *)malloc(sizeof(int) * (ft_count_words(s, c) + 1));
	str_len = 0;
	i = 0;
	j = -1;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
		{
			while (s[i] != '\0' && s[i + 1] == c)
				i++;
			strs_len[j++] = str_len;
			str_len = 0;
			i++;
		}
		str_len++;
		i++;
	}
	return (strs_len);
}

char	**ft_alloc_mem(char const *s, char c)
{
	char	**tab;
	int		count;
	int		*strs_len;
	int		i;

	count = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	strs_len = ft_strs_len(s, c);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < count)
	{
		tab[i] = (char *)malloc(sizeof(char) * (strs_len[i] + 1));
		i++;
	}
	return (tab);
}


char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		j;
	int		k;

	if (!s || !c)
		return (NULL);
	count = ft_count_words(s, c);
	tab = ft_alloc_mem(s, c);
	k = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (k < count)
	{
		j = 0;
		while (s[i])
		{
			if (s[i] == c || s[i] == '\0')
			{
				while (s[i] != '\0' && s[i + 1] == c)
					i++;
				j++;
				i++;
			}
			i++;
		}
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "       Hello world, how       are you today?  	";
	int		tot_count;
	int		*lens;
	int		i;

	tot_count = ft_count_words(str, ' ');
	lens = ft_strs_len(str, ' ');
	i = 0;
	while (i < tot_count)
	{
		printf("%d\n", lens[i]);
		i++;
	}
	return (0);
}
