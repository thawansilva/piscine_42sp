/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:05:35 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 09:56:32 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main()
{
	printf("Fatorial de 0 = %d \n", ft_recursive_factorial(0));
	printf("Fatorial de 1 = %d \n", ft_recursive_factorial(1));
    printf("Fatorial de 5 = %d \n", ft_recursive_factorial(5));
    printf("Fatorial de 7 = %d \n", ft_recursive_factorial(7));
    printf("Fatorial de -3 = %d \n", ft_recursive_factorial(-3));
}
*/
