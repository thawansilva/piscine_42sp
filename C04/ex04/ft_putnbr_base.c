/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:43:56 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/29 11:45:46 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_base_valid(char *base)
{
	int	i;
	int	next_i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
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

void	ft_print_reverse_str(char *str, int len)
{
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
}

void	ft_convert_number(long nbr, char *base)
{
	int		i;
	int		base_length;
	char	res[35];

	i = 0;
	base_length = 0;
	while (base[base_length] != '\0')
		base_length++;
	while (nbr > 0)
	{
		res[i] = base[nbr % base_length];
		nbr /= base_length;
		i++;
	}
	ft_print_reverse_str(res, i - 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;

	num = nbr;
	if (!ft_is_base_valid(base))
		return ;
	if (num == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	ft_convert_number(num, base);
}
/*
int	main(void)
{
	ft_putnbr_base(-1235, "011");
	write(1, "\n", 1);	
	ft_putnbr_base(-255, "0123456789ABCDEF");
	write(1, "\n", 1);	
	ft_putnbr_base(10, "poneyvif");
	write(1, "\n", 1);	
	ft_putnbr_base(-2147483648, "01");
}
*/
