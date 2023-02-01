/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:11:16 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/11/30 12:12:06 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	if (!s)
		return (0);
	while (s[c])
		c++;
	return (c);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*aux;
	size_t	asg;

	asg = (count * size);
	aux = malloc(asg);
	if (!aux)
		return (0);
	i = 0;
	while (i < asg)
		((char *)aux)[i++] = 0;
	return (aux);
}

char	*ft_free(char **buff, char **buff2)
{
	if (buff && *buff)
	{
		free(*buff);
		*buff = NULL;
	}
	if (buff2 && *buff2)
	{
		free(*buff2);
		*buff2 = NULL;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*n_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	n_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!n_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		n_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		n_str[j++] = s2[i++];
	n_str[j] = '\0';
	return (n_str);
}
