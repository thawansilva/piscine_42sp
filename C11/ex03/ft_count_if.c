/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:15:51 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/12 10:15:51 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, (int(*f)(char*)))
{
	int	count;

	count = 0;
	while (length-- > 0)
	{
		if (f(*tab++))
			count++;
	}
	return (count);
}
