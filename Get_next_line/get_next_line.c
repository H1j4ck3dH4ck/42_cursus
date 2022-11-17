/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:12:04 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/11/17 15:29:11 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_next_line(char *buff, char *line)
{
	int	len;

	len = 0;
	if(!buff[len])
		return (NULL);
	while (buff[len] && buff[len] != '\n')
		len++;
	if (buff[len] == '\n')
		len++;
	line = ft_calloc(len + 1, sizeof(char));
	if (!line)
		return (NULL);
	len = 0;
	while (buff[len] && buff[len] != '\n')
	{
		line[len] = buff[len];
		len++;
	}
	if (buff[len] == '\n')
		line[len] = '\n';
	return (line);
}

char	*ft_next_buff(char *buff)
{
	int	len;
	int	i;
	char	*new;

	len = 0;
	while (buff[len] && buff[len] != '\n')
		len++;
	if (!buff[len])
		return (ft_free(&buff, NULL));;
	new = ft_calloc(ft_strlen(buff) - len + 1, sizeof(char));
	if (!new)
		return (ft_free(&buff, NULL));
	len++;
	i = 0;
	while(buff[len])
		new[i++] = buff[len++];
	ft_free(&buff, NULL);
	return (new);
}

