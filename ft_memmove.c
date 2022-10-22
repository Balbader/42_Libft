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
	unsigned int	i;
	char			*temp;

	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		temp[i] = ((char *)src)[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = temp[i];
		i++;
	}
	free(temp);
	((char *)dst)[i] = '\0';
	return (dst);
}
