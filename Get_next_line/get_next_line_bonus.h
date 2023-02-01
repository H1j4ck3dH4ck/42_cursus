/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:15:29 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/11/30 12:17:23 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<unistd.h>
# include<stdlib.h>
# include<limits.h>
# include<fcntl.h>

char	*ft_next_line(char *buff, char *line);
char	*ft_next_buff(char *buff);
char	*ft_strchr(char *s, int c);
char	*ft_free(char **buff, char **buff2);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_protect_join(char *buff, char *read);
char	*ft_read_fd(int fd, char *buff, int bytes);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);
#endif
