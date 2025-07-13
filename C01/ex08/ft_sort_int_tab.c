/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 08:15:31 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/20 08:20:05 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	low_index;
	int	x;
	int	y;

	x = 0;
	while (x < size - 1)
	{
		low_index = x;
		y = x + 1;
		while (y < size)
		{
			if (tab[y] < tab[low_index])
				low_index = y;
			y++;
		}
		if (low_index != x)
		{
			temp = tab[x];
			tab[x] = tab[low_index];
			tab[low_index] = temp;
		}
		x++;
	}
}
