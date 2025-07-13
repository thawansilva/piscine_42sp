/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 09:21:48 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/14 09:21:48 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_do_op.h"

void	ft_do_op(char **args)
{
	int		nbr1;
	char	op;
	int		nbr2;

	nbr1 = ft_atoi(*args++);
	op = **args++;
	nbr2 = ft_atoi(*args++);
	if (!ft_is_valid(op))
	{
		ft_putstr("0\n");
		return ;
	}
	if (op == '+')
		ft_add(nbr1, nbr2);
	else if (op == '-')
		ft_subt(nbr1, nbr2);
	else if (op == '*')
		ft_mult(nbr1, nbr2);
	else if (op == '/')
		ft_div(nbr1, nbr2);
	else
		ft_mod(nbr1, nbr2);
	ft_putchar('\n');
}
