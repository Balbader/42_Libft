/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:44:45 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/20 17:08:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_check_char(s1[i], set))
		i++;
	j = strlen(s1) - 1;
	while (j > i && ft_check_char(s1[j], set))
		j--;
	res = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!res)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
