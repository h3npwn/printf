/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahja <abahja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:33:02 by abahja            #+#    #+#             */
/*   Updated: 2024/12/23 13:37:19 by abahja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printhexhelper(unsigned long long decimal_v, int *bytes)
{
	char			*hex;

	hex = "0123456789abcdef";
	if (decimal_v < 16)
	{
		ft_putchar(hex[decimal_v], bytes);
		return ;
	}
	ft_printhexhelper(decimal_v / 16, bytes);
	ft_putchar(hex[decimal_v % 16], bytes);
}

static void	ft_printhexhelper_ux(unsigned long long decimal_v, int *bytes)
{
	char			*hexu;

	hexu = "0123456789ABCDEF";
	if (decimal_v < 16)
	{
		ft_putchar(hexu[decimal_v], bytes);
		return ;
	}
	ft_printhexhelper_ux(decimal_v / 16, bytes);
	ft_putchar(hexu[decimal_v % 16], bytes);
}

static void	ft_printhexhelper_u(unsigned long long decimal_v, int *bytes)
{
	char			*hexux;

	hexux = "0123456789abcdef";
	if (decimal_v < 16)
	{
		ft_putchar(hexux[decimal_v], bytes);
		return ;
	}
	ft_printhexhelper(decimal_v / 16, bytes);
	ft_putchar(hexux[decimal_v % 16], bytes);
}

void	ft_printhex(unsigned long long decimal_v, int *bytes, char flag)
{
	if (flag == 'p')
	{
		if (decimal_v == 0)
		{
			ft_putstr("(nil)", bytes);
			return ;
		}
		ft_putstr("0x", bytes);
		ft_printhexhelper(decimal_v, bytes);
	}
	else if (flag == 'X')
		ft_printhexhelper_ux(decimal_v, bytes);
	else if (flag == 'x')
		ft_printhexhelper_u(decimal_v, bytes);
}
