/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:22:00 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/17 10:24:59 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolwer(int c)
{
	unsigned char	test;

	test = c;
	if (test >= 'A' && test <= 'Z')
		return (test += 32);
	return (0);
}
