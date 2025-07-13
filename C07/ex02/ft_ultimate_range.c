/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:00:00 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/08 09:57:23 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (len <= 0)
	{
		*range = (void *)0;
		return (0);
	}
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int	*range;
	int size = ft_ultimate_range(&range, 0 , 42);
	printf("%i\n", size);
	free(range);
	return 0;
}
*/
