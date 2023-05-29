/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:38:43 by antferna          #+#    #+#             */
/*   Updated: 2023/05/04 17:39:10 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char *base)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = ft_puthex(n / 16, base);
		if (i == -1)
			return (-1);
		if (ft_putchar(base[n % 16]) == -1)
			return (-1);
		i++;
	}
	else if (n < 16)
	{
		if (ft_putchar(base[n]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
