/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:42:14 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/10/25 16:18:24 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char const type, int count)
{
	if (type == '%')
		count = ft_printchar('%', count);
	if (type == 'c')
		count = ft_printchar(va_arg(arg, int), count);
	if (type == 's')
		count = ft_printstr(va_arg(arg, char *), count);
	if (type == 'p')
		count = ft_printpt(va_arg(arg, void *), count);
	if (type == 'd' || type == 'i')
		count = ft_printint(va_arg(arg, int), count);
	if (type == 'u')
		count = ft_printnum(va_arg(arg, int), count);
	if (type == 'x')
		count = ft_printhexamin(va_arg(arg, unsigned int), count);
	if (type == 'X')
		count = ft_printhexamax(va_arg(arg, unsigned int), count);
	return (count);
}

int	ft_check(va_list arg, char const *s, int count)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			count = ft_type(arg, s[i + 1], count);
			if (count == -1)
				return (-1);
			i++;
		}
		else
		{
			count = ft_printchar(s[i], count);
			if (count == -1)
				return (-1);
		}
		i++;
	}
	return (count);
}

int	ft_printf(char const *s, ...)
{
	int		count;
	va_list	arg;

	count = 0;
	va_start(arg, s);
	count = ft_check (arg, s, count);
	va_end(arg);
	return (count);
}
