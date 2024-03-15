/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 00:36:20 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/15 21:34:09 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_printp(void *ptr)
{
	unsigned long	n;
	unsigned long	b;
	char			*base;
	int				count;

	n = (unsigned long)ptr;
	count = 0;
	base = "0123456789abcdef";
	b = 16;
	if (n >= b)
	{
		count += ft_printp((void *)(n / b));
		count += ft_printc(base[n % b]);
	}
	else
		count += ft_printc(base[n]);
	return (count);
}
