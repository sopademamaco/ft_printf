/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davioliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:50:41 by davioliv          #+#    #+#             */
/*   Updated: 2023/08/31 16:11:59 by davioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *type, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printpercent(void);
int	ft_printptr(unsigned long ptr);
int	ft_printnbr(int i);
int	ft_printhex(unsigned int a, const char format);
int	ft_printunbr(unsigned int i);

#endif
