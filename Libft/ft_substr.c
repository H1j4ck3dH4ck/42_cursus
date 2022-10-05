/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:16:27 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/10/05 13:47:52 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (start + len == len_s + 1 || len > len_s)
		len = len_s - start;
	str = (char *)malloc(len +1);
	if (!str)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(str, s, len + 1);
	return (str);
}
