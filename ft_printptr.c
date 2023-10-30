/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davioliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:52:48 by davioliv          #+#    #+#             */
/*   Updated: 2023/07/26 10:30:23 by davioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long ptr)
{
	int	len;

	len = 0;
	while (ptr > 0)
	{
		ptr = ptr / 16;
		len++;
	}
	return (len);
}

void	ft_prt_ptr(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_prt_ptr(ptr / 16);
		ft_prt_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd(ptr + '0', 1);
		else
			ft_putchar_fd(ptr - 10 + 'a', 1);
	}
}

int	ft_printptr(unsigned long ptr)
{
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	ft_prt_ptr(ptr);
	return (ft_ptr_len(ptr) + 2);
}
