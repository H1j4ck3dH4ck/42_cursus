/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:01:41 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/10/25 16:16:32 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdlib.h>
# include<unistd.h>
# include<stdio.h>

int	ft_printf(char const *s, ...);
int	ft_printchar(int c, int count);
int	ft_printstr(char *s, int count);
int	ft_type(va_list arg, char const type, int count);
int	ft_printint(int num, int count);
int	ft_printnum(unsigned int num, int count);
int	ft_printpt(void *pt, int count);
int	ft_convert(unsigned long int num, int count);
int	ft_printhexamin(unsigned int num, int count);
int	ft_printhexamax(unsigned int num, int count);
#endif
