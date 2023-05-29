/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:15:43 by antferna          #+#    #+#             */
/*   Updated: 2023/05/04 17:37:16 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(char const *str, ...);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putptr(void *ptr);
int			ft_putnbr(int n);
int			ft_putuint(unsigned int n);
int			ft_puthex(unsigned long long n, char *base);

#endif