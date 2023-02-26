/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:24:37 by mchampag          #+#    #+#             */
/*   Updated: 2021/11/16 10:41:35 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar(char c)
{
	int	bytes;

	bytes = write(1, &c, 1);
	return (bytes);
}

int	ft_putstr(char *str)
{
	int	bytes;

	if (!str)
		return (write(1, "(null)", 6));
	bytes = write(1, str, ft_strlen(str));
	return (bytes);
}

int	ft_putnbr(long number, char *str)
{
	int	bytes;

	bytes = 0;
	if (*str == 'u')
		number = (unsigned int)number;
	if (number < 0)
	{
		bytes = ft_putchar('-');
		number *= -1;
	}
	if (number > 9)
		bytes += ft_putnbr(number / 10, str);
	bytes += ft_putchar(number % 10 + '0');
	return (bytes);
}
