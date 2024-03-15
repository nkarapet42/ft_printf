/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 00:02:38 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/16 12:49:20 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"
#define HEX_LEN 9

int	ft_printhex(unsigned int hex, const char *base)
{
	char	res[HEX_LEN];
	int		digit;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (hex == 0 || (long)hex == LONG_MIN)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	ft_bzero((char *)res, 9);
	i = HEX_LEN - 2;
	while (hex && i >= 0)
	{
		digit = hex % 16;
		res[i] = base[digit];
		i--;
		hex /= 16;
	}
	i += 2;
	len = HEX_LEN - (i--);
	ft_putstr_fd(res + i, 1);
	return (len);
}
