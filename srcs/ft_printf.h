/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahja <abahja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:14:51 by abahja            #+#    #+#             */
/*   Updated: 2024/12/23 13:24:17 by abahja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*----------------------------------------------*/
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_putchar(int c, int *bytes); // handles == %c;
void	ft_putstr(char *s, int *bytes); // handles == %s;
void	ft_putnbr(int n, int *bytes); // handles == %d && %i;
void	ft_putnbru(unsigned int nbr, int *bytes); //handels == %u
void	ft_printhex(unsigned long long decimal_v, int *bytes, char flag);
int		ft_printf(const char *param, ...);
/*----------------------------------------------*/
#endif