/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:22:40 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/11 11:22:40 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, (int(*f)(int)))
{
	int	i;
	int	*values_tab;

	i = 0;
	values_tab = malloc(sizeof(int) * length);
	if (!values_tab)
		return (0);
	while (i < length)
	{
		values_tab[i] = f(tab[i]);
		i++;
	}
	return (values_tab);
}
