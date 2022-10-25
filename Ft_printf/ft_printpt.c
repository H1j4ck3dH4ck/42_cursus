/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:33:39 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/10/25 16:04:46 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpt(void *pt, int count)
{
	count = ft_printstr("0x", count);
	if (count == -1)
		return (-1);
	count = ft_convert((unsigned long int) pt, count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_convert(unsigned long int num, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
	{
		count = ft_convert(num / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar(base[num % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
