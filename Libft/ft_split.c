/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:20:51 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/10/05 13:54:11 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	sum;
	int	p;

	sum = 0;
	p = 0;
	while (*str != '\0')
	{
		if(*str != c && p == 0)
		{
			sum++;
			p = 1;
		}
		else if (*str == c)
			p = 0;
		str++;
	}
	return (sum);
}
static int	ft_len(const char *str, int i, char c)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_error(char **new, int j)
{
	while (j >= 0)
	{
		free(new[j]);
		j--;
	}
	free(new);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**new;

	i = 0;
	j = 0;
	new = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	while (j < ft_count_words(s, c))
	{
		while (s[i] == c)
		i++;
		new[j] = ft_substr(s, i, ft_len(s, i, c));
		if (!new[j])
			return (ft_error(new, j));
		i += ft_len(s, i, c);
		j++;
	}
	new[j] = 0;
	return (new);
}
