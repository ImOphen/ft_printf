/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:26:24 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/19 10:20:43 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_put_adress(int *ret, unsigned long adrs);
void	ft_convert_hex(int *ret, char c, unsigned int n);
void	ft_put_unsigned_nbr(int *ret, unsigned int n);
void	ft_putnbr(int *ret, int n);
void	ft_putstr(int *ret, char *str);
void	ft_putchar(int *ret, char c);

#endif
