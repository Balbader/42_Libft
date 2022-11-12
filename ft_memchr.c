/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:09:03 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/12 11:09:05 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	to_find;
	unsigned char	*str;
	size_t			i;

	to_find = c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == to_find)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
