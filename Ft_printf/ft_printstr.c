/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:46:33 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/10/24 14:16:28 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s, int count)
{
	size_t	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		count = ft_printchar(s[i++], count);
		if (count == -1)
			return (-1);
	}
	return (count);
}
