/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:50:44 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/12 10:50:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	test;

	test = c;
	if ((test >= 'A' && test <= 'Z') || (test >= 'a' && test <= 'z'))
		return (1);
	return (0);
}
