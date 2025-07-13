/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:24:18 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/08 09:50:05 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	range = malloc(len * sizeof(min) + 1);
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	range[i] = '\0';
	return (range);
}
/*
#include <stdio.h>
int main(void)
{
	int	min = 0;
	int	max = 42;

	int	*range = ft_range(min, max);
	for (int i = 0; i < max - min; i++) {
		printf("%d\n", range[i]);
	}
	free(range);
	return 0;
}
*/
