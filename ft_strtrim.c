/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:44:45 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/20 13:23:29 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			j++;
		}
		i++;
	}
	return (res);
}

int	main(void)
{
	return (0);
}
