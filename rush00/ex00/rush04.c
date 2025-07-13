/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:58:02 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/20 20:24:11 by thaperei         ###   ########.fr       */
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
	if (is_top && is_left)
		ft_putchar('A');
	else if (is_top && is_right)
		ft_putchar('C');
	else if (is_bottom && is_left)
		ft_putchar('C');
	else if (is_bottom && is_right)
		ft_putchar('A');
	else if (is_top || is_bottom || is_left || is_right)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (y < 0 || x < 0)
		return ;
	b = 0;
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
