/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:20:32 by antferna          #+#    #+#             */
/*   Updated: 2023/05/04 17:31:35 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i = ft_putuint(n / 10);
		if (i == -1)
			return (-1);
		n = n % 10;
	}
	if (ft_putchar(n + '0') == -1)
		return (-1);
	i++;
	return (i);
}
