/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:35:13 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/04 12:35:13 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

int	ft_atoi(char *nbr)
{
	int	result;

	result = 0;
	while (*nbr)
		result = result * 10 + (*nbr++ - '0');
	return (result);
}
