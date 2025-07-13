/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:55:36 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 10:02:09 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1 || nb >= 2147483629)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_is_prime(4));
	printf("%i\n", ft_is_prime(19));
	printf("%i\n", ft_is_prime(121));
	printf("%i\n", ft_is_prime(83));
	printf("%i\n", ft_is_prime(97));
}
*/
