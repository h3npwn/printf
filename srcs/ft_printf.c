/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahja <abahja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:54:56 by ael-khni          #+#    #+#             */
/*   Updated: 2024/12/25 09:06:15 by abahja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_flags(va_list args, const char format, int *bytes)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), bytes);
	else if (format == 'u')
		ft_putnbru(va_arg(args, unsigned int), bytes);
	else if (format == 'c')
		ft_putchar((char)va_arg(args, int), bytes);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), bytes);
	else if (format == '%')
		ft_putchar(format, bytes);
	else if (format == 'x')
		ft_printhex(va_arg(args, unsigned int ), bytes, 'x');
	else if (format == 'X')
		ft_printhex(va_arg(args, unsigned int), bytes, 'X');
	else if (format == 'p')
		ft_printhex(va_arg(args, unsigned long long), bytes, 'p');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		bytes;

	bytes = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check_flags(args, *format, &bytes);
		}
		else
			ft_putchar(*format, &bytes);
		format++;
	}
	va_end(args);
	return (bytes);
}
