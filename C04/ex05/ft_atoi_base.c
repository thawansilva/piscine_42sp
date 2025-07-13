/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:40:03 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/29 09:42:14 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	next_i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || ft_is_space(base[i]))
			return (0);
		next_i = i + 1;
		while (base[next_i] != '\0')
		{
			if (base[i] == base[next_i])
				return (0);
			next_i++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_find_index_in_base(char letter, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == letter)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert_str_to_int(char *str, char *base)
{
	int	i;
	int	base_length;
	int	result;
	int	value;

	i = 0;
	base_length = 0;
	result = 0;
	while (base[base_length] != '\0')
		base_length++;
	while (str[i] != '\0')
	{
		value = ft_find_index_in_base(str[i], base);
		if (value == -1)
			break ;
		result = result * base_length + value;
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	if (!ft_is_valid_base(base) || str[i] == '\0')
		return (0);
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (sign * ft_convert_str_to_int((str + i), base));
}
/*
int main()
{	
	printf("Binary 1010: %d\n", ft_atoi_base("   ---+1010", "01"));
	printf("Hex Ff: %d\n", ft_atoi_base("  +FF", "0123456789ABCDEF"));
	printf("Invalid base: %d\n", ft_atoi_base("123", "11"));
}
*/
