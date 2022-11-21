/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:12:04 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/11/21 11:44:23 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_next_line(char *buff, char *line)
{
	int	len;

	len = 0;
	if (!buff[len])
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
	int		len;
	int		i;
	char	*new;

	len = 0;
	while (buff[len] && buff[len] != '\n')
		len++;
	if (!buff[len])
		return (ft_free(&buff, NULL));
	new = ft_calloc(ft_strlen(buff) - len + 1, sizeof(char));
	if (!new)
		return (ft_free(&buff, NULL));
	len++;
	i = 0;
	while (buff[len])
		new[i++] = buff[len++];
	ft_free(&buff, NULL);
	return (new);
}

char	*ft_protect_join(char *buff, char *read)
{
	char	*tmp;

	tmp = ft_strjoin(buff, read);
	if (!tmp)
		return (ft_free(&buff, &tmp));
	ft_free(&buff, 0);
	return (tmp);
}

char	*ft_read_fd(int fd, char *buff, int bytes)
{
	char	*tmp;

	tmp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!tmp)
		return (ft_free(&buff, &tmp));
	while (bytes > 0)
	{
		bytes = read(fd, tmp, BUFFER_SIZE);
		if (bytes < 0)
			return (ft_free(&buff, &tmp));
		tmp[bytes] = '\0';
		buff = ft_protect_join(buff, tmp);
		if (!buff)
			return (NULL);
		if (ft_strchr(tmp, '\n'))
			break ;
	}
	ft_free(&tmp, NULL);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*buff = NULL;
	char		*line;
	int			bytes;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		if (buff)
			ft_free(&buff, NULL);
		return (NULL);
	}
	if (!buff)
		buff = ft_calloc(1, 1);
	if (!buff)
		return (ft_free(&buff, NULL));
	bytes = 1;
	buff = ft_read_fd(fd, buff, bytes);
	if (!buff)
		return (NULL);
	line = ft_next_line(buff, line);
	if (!line || *line == '\0')
		return (ft_free(&buff, &line));
	buff = ft_next_buff(buff);
	return (line);
}
