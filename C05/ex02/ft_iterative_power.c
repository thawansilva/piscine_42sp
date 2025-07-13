/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:16:25 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 09:54:25 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	value = 1;
	while (power > 0)
	{
		value *= nb;
		power--;
	}
	return (value);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_iterative_power(2, 5));
	printf("%i\n", ft_iterative_power(2, 0));
	printf("%i\n", ft_iterative_power(0, 2));
}
*/
