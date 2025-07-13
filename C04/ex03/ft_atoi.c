/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:24:25 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/29 08:28:31 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(char *str)
{
	int	pos;
	int	sum;
	int	sign;

	pos = 0;
	sum = 0;
	sign = 1;
	while (ft_is_space(str[pos]))
			pos++;
	while (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign = -sign;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		sum = sum * 10 + (str[pos] - '0');
		pos++;
	}
	return (sum * sign);
}
/*
int	main(void)
{
	printf("%i\n", ft_atoi("---+--+1234ab567"));
	printf("%i\n", ft_atoi("--092831"));
}
*/
