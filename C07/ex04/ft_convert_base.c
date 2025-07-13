/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:55:43 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/08 16:44:59 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_valid_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_find_length(int num, int base_len)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num /= base_len;
		i++;
	}
	return (i);
}

void	ft_convert_base_to(char *str, char *base_to, int len_nbr, long value)
{
	int	len_base;

	len_base = ft_strlen(base_to);
	while (value != 0)
	{
		str[len_nbr - 1] = base_to[value % len_base];
		value /= len_base;
		len_nbr--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	value;
	int		len_nbr;
	int		len_base;
	char	*str_nbr;

	if (!nbr)
		return (0);
	if (!(ft_is_valid_base(base_from) || ft_is_valid_base(base_to)))
		return (0);
	value = ft_atoi_base(nbr, base_from);
	len_base = ft_strlen(base_to);
	len_nbr = ft_find_length(value, len_base);
	if (value < 0)
		len_nbr++;
	str_nbr = malloc(len_nbr * sizeof(char) + 1);
	if (!str_nbr)
		return (0);
	if (value < 0)
	{
		str_nbr[0] = '-';
		value *= -1;
	}
	ft_convert_base_to(str_nbr, base_to, len_nbr, value);
	str_nbr[len_nbr + 1] = '\0';
	return (str_nbr);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 1)
		return (1);
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
*/
