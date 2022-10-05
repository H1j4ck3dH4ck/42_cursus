/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:08:40 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/09/29 11:12:40 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;

	aux = malloc(ft_strlen(s1) + 1);
	if (!aux)
		return (0);
	ft_memcpy(aux, s1, ft_strlen(s1) + 1);
	return (aux);
}
