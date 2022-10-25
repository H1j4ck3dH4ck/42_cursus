/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:40:35 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/10/25 16:15:58 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexamin(unsigned int num, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
	{
		count = ft_printhexamin(num / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar(base[num % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
