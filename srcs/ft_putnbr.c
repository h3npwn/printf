/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahja <abahja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:56:51 by abahja            #+#    #+#             */
/*   Updated: 2024/12/23 12:59:26 by abahja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int nbr, int *bytes)
{
	unsigned long	div;

	div = 1;
	if (nbr == 0)
	{
		ft_putchar('0', bytes);
		return ;
	}
	while (nbr / div > 9)
		div = div * 10;
	while (div != 0)
	{
		ft_putchar((nbr / div + '0'), bytes);
		nbr = nbr % div;
		div = div / 10;
	}
}

void	ft_putnbr(int n, int *bytes)
{
	long	nbr;
	long	div;

	div = 1;
	nbr = n;
	if (nbr == 0)
	{
		ft_putchar('0', bytes);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', bytes);
		nbr = -nbr;
	}
	while (nbr / div > 9)
		div = div * 10;
	while (div != 0)
	{
		ft_putchar((nbr / div + '0'), bytes);
		nbr = nbr % div;
		div = div / 10;
	}
}
