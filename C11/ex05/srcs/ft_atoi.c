/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 09:28:50 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/14 09:28:50 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(char *nbr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*nbr) || *nbr == '-' || *nbr == '+')
	{
		if (*nbr++ == '-')
			sign = -1;
	}
	while (*nbr >= '0' && *nbr <= '9')
		result = result * 10 + (*nbr++ - '0');
	return (result * sign);
}
