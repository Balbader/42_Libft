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
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	size;

	size = 0;
	if (src < dst)
	{
		size = len;
		while (size > 0)
		{
			size--;
			((unsigned char *)dst)[size] = ((unsigned char *)src)[size];
		}
	}
	else
	{
		size = 0;
		while (size < len)
		{
			((unsigned char *)dst)[size] = ((unsigned char *)src)[size];
			size++;
		}
	}
	return (dst);
}
