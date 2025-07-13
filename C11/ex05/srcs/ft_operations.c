/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:14:56 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/16 11:14:56 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_do_op.h"

void	ft_add(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 + nbr2);
}

void	ft_subt(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 - nbr2);
}

void	ft_mult(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 * nbr2);
}

void	ft_div(int nbr1, int nbr2)
{
	if (nbr2 == 0)
	{
		ft_putstr("Stop : division by zero");
	}
	else
	{
		ft_putnbr(nbr1 / nbr2);
	}
}

void	ft_mod(int nbr1, int nbr2)
{
	if (nbr2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
	}
	else
	{
		ft_putnbr(nbr1 % nbr2);
	}
}
