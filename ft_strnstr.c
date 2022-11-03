/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:41:48 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/17 18:55:39 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (((char *)needle)[j] == '\0')
		return ((char *)haystack);
	while (((char *)haystack)[i] && i < len)
	{
		if (((char *)haystack)[i] == ((char *)needle)[j])
		{
			i++;
			j++;
		}
		else
			i++;
	}
	if (j == 0)
		return (NULL);
	else
		return ((char *)haystack + (i - (ft_strlen(needle) + 1)));
}
