/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davioliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:53:28 by davioliv          #+#    #+#             */
/*   Updated: 2023/08/29 15:52:34 by davioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned long n)
{
	int	l;

	l = 1;
	while (n >= 10)
	{
		n /= 10;
		l++;
	}
	return (l);
}

int	ft_printnbr(int i)
{
	int		len;
	char	*str;

	str = ft_itoa(i);
	ft_putnbr_fd(i, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}

int	ft_printunbr(unsigned int i)
{
	int		l;

	if (i >= 10)
		ft_printunbr(i / 10);
	ft_putchar_fd(i % 10 + 48, 1);
	l = ft_nbrlen(i);
	return (l);
}
