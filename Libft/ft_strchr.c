/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:37:47 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/09/22 14:12:49 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
/*{
	char	*a;

	a = (char *)s;
	if (a)
	{
		while (*a)
		{
			if ((char)c == *a)
				return (a);
			a++;
		}
		if ((char)c == 0)
			return (a);
	}
	return (NULL);
}*/

{
	return (ft_memchr (s, c, ft_strlen (s) + 1));
}
