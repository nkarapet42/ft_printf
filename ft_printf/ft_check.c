/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 23:06:48 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/16 12:47:44 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_check(char input, va_list args)
{
	int	count;

	count = 0;
	if (input == 'c')
		count += ft_printc(va_arg(args, int));
	else if (input == 's')
		count += ft_prints(va_arg(args, char *));
	else if (input == 'p')
	{
		ft_putstr_fd("0x", 1);
		count += 2;
		count += ft_printp(va_arg(args, void *));
	}
	else if (input == 'd' || input == 'i')
		count += ft_printdi(va_arg(args, int));
	else if (input == 'u')
		count += ft_printu(va_arg(args, unsigned int));
	else if (input == 'x')
		count += ft_printhex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (input == 'X')
		count += ft_printhex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (input == '%')
		count += ft_printc('%');
	return (count);
}
