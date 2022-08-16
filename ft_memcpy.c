/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:36:26 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/16 16:10:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!((unsigned char *)dst) || !str)
		return (0);
	str = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = str[i];
		i++;
	}
	((unsigned char *)dst)[i] = '\0';
	return (dst);
}
