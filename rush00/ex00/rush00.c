/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:58:02 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/20 18:45:45 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int a, int b, int x, int y)
{
	int	is_top;
	int	is_bottom;
	int	is_left;
	int	is_right;

	is_top = (b == 0);
	is_bottom = (b == y - 1);
	is_left = (a == 0);
	is_right = (a == x - 1);
	if ((is_top || is_bottom) && (is_left || is_right))
		ft_putchar('o');
	else if (is_top || is_bottom)
		ft_putchar('-');
	else if (is_left || is_right)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 0;
	if (y < 0 || x < 0)
		return ;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			print_char(a, b, x, y);
			a++;
		}
		write(1, "\n", 1);
		b++;
	}
}
