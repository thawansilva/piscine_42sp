/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:51:26 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/29 17:02:23 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial_result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial_result = 1;
	while (nb > 0)
	{
		factorial_result *= nb;
		nb--;
	}
	return (factorial_result);
}
/*
int main(void)
{
		printf("%i\n", ft_iterative_factorial(5));
		printf("%i\n", ft_iterative_factorial(0));
		printf("%i\n", ft_iterative_factorial(-4));
}
*/
