/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:22:26 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/20 10:44:07 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	tot_len;

	tot_len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (tot_len + 1));
	if (!res)
		return (NULL);
	ft_strcat(res, s1);
	ft_strcat(res, s2);
	res[tot_len - 1] = '\0';
	return (res);
}
