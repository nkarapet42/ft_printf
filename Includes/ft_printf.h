/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:02:48 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/15 20:54:22 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include "../Includes/libft.h"

int	ft_printf(const char *input, ...);
int	ft_check(char input, va_list args);
int	ft_printc(int c);
int	ft_printdi(int n);
int	ft_prints(char *s);
int	ft_printu(unsigned int n);
int	ft_printp(void *ptr);
int	ft_printhex(unsigned int hex, const char *base);

#endif
