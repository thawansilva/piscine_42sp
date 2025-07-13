/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:38:28 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/29 09:49:12 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[end];
		tab[end] = tab[start];
		tab[start] = temp;
		start++;
		end--;
	}
}

int main()
{
	int number[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(number) / sizeof(number[0]); 
	ft_rev_int_tab(number, size);
	int i = 0;
	while (i < size)
	{
			printf("%d", number[i]);
			i++;
	}
}
