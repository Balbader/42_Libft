/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:21:17 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/16 12:18:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	d;

	i = 0;
	temp = (unsigned char *)b;
	d = (unsigned char)c;
	while (i < len)
	{
		temp[i] = d;
		i++;
	}
	return (b);
}
