/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:30:09 by antferna          #+#    #+#             */
/*   Updated: 2023/05/04 17:06:06 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_form(va_list args, char *s)
{
	if (s[0] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s[0] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s[0] == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (s[0] == 'd' || s[0] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s[0] == 'u')
		return (ft_putuint(va_arg(args, unsigned int)));
	else if (s[0] == 'x')
		return (ft_puthex((unsigned int)va_arg(args, unsigned int)
				, "0123456789abcdef"));
	else if (s[0] == 'X')
		return (ft_puthex((unsigned int)va_arg(args, unsigned int)
				, "0123456789ABCDEF"));
	else if (s[0] == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		aux[3];

	aux[2] = 0;
	aux[0] = 0;
	va_start(args, s);
	while (s[aux[0]])
	{
		if (s[aux[0]] == '%')
		{
			aux[1] = ft_form(args, (char *)(s + ++aux[0]));
			if (aux[1] == -1)
				return (-1);
			aux[2] += aux[1];
		}
		else
		{
			if (ft_putchar(s[aux[0]]) == -1)
				return (-1);
			aux[2]++;
		}
		aux[0]++;
	}
	va_end(args);
	return (aux[2]);
}
