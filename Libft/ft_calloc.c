/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:38:10 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/09/29 11:08:51 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;
	size_t	asg;

	asg = (count * size);
	aux = malloc(asg);
	if (!aux)
		return (0);
	ft_memset(aux, 0, asg);
	return (aux);
}
