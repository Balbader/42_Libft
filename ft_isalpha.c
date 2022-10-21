/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:41:19 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/16 10:41:22 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	test;

	test = c;
	if ((test >= 'a' && test <= 'z') || (test >= 'A' && test <= 'Z'))
		return (1);
	return (0);
}
