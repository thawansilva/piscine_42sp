/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:22:10 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/16 11:22:10 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_do_op.h"

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = '0' + (nbr % 10);
	ft_putchar(c);
}
