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
	while (i < len && haystack[i] && needle[j])
	{
		while (i + j < len && haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (needle[j])
			i++;
	}
	if (needle[j])
		return (NULL);
	return ((char *)haystack + i);
}
