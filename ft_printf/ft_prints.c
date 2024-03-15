/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 23:22:06 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/14 14:07:29 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_prints(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	count += ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (count);
}
