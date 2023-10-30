/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davioliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:52:16 by davioliv          #+#    #+#             */
/*   Updated: 2023/08/29 15:36:10 by davioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int a)
{
	int	len;

	len = 0;
	while (a)
	{
		a = a / 16;
		len++;
	}
	return (len);
}

void	ft_hex(unsigned int a, const char format)
{
	if (a >= 16)
	{
		ft_hex(a / 16, format);
		ft_hex(a % 16, format);
	}
	else
	{
		if (a <= 9)
			ft_putchar_fd(a + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(a - 10 + 'a', 1);
			else
				ft_putchar_fd(a - 10 + 'A', 1);
		}
	}
}

int	ft_printhex(unsigned int a, const char format)
{
	if (a == 0)
		return (write(1, "0", 1));
	else
		ft_hex(a, format);
	return (ft_len_hex(a));
}
