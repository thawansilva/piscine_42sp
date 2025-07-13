/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:33:41 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 09:32:57 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factoring_number(int *nb)
{
	int	result;
	int	count_pair;
	int	i;

	result = 1;
	i = 2;
	while (i <= *nb / i)
	{
		count_pair = 0;
		while (*nb % i == 0)
		{
			count_pair++;
			*nb /= i;
		}
		if (count_pair % 2 != 0)
			return (0);
		while (count_pair > 0)
		{
			result *= i;
			count_pair -= 2;
		}
		i++;
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int	result;

	if (nb <= 0)
		return (0);
	result = ft_factoring_number(&nb);
	if (nb != 1)
		return (0);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_sqrt(4));
	printf("%i\n", ft_sqrt(9));
	printf("%i\n", ft_sqrt(25));
	printf("%i\n", ft_sqrt(36));
	printf("%i\n", ft_sqrt(49));
	printf("%i\n", ft_sqrt(100));
	printf("%i\n", ft_sqrt(6));
	printf("%i\n", ft_sqrt(121));
	printf("%i\n", ft_sqrt(111));
}
*/
