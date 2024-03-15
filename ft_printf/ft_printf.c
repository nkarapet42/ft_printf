/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:12:26 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/22 20:56:09 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX%", input[i]))
				count += ft_check(input[i], args);
		}
		else
		{
			ft_putchar_fd(input[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
