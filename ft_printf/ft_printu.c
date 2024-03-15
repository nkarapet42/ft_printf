/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 00:56:50 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/14 16:33:02 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

static	int	digit_lenu(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_putunsigned(unsigned int n, int fd)
{
	if (n < 0)
	{
		ft_putstr_fd("4294967295", fd);
		return ;
	}
	else if (n > 9)
	{
		ft_putunsigned(n / 10, fd);
		ft_putunsigned(n % 10, fd);
	}
	else if (n <= 9)
		ft_putchar_fd(n + '0', fd);
}

int	ft_printu(unsigned int n)
{
	int	count;

	count = 0;
	count += digit_lenu(n);
	ft_putunsigned(n, 1);
	return (count);
}
