/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:07:45 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 09:50:17 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_recursive_power(2, 3));
	printf("%i\n", ft_recursive_power(3, 3));
	printf("%i\n", ft_recursive_power(3, 4));
	printf("%i\n", ft_recursive_power(0, 4));
	printf("%i\n", ft_recursive_power(3, 0));
	printf("%i\n", ft_recursive_power(-4, 2));
}
*/
