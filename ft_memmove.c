/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:12:05 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/16 16:45:19 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[len - 1 - i] = str[len - 1 - i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = str[i];
			i++;
		}
	}
	return (dst);
}
