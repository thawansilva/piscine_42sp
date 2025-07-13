/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:00:52 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/22 19:12:33 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	is_alpha_lower;

	index = 0;
	while (str[index] != '\0')
	{
		is_alpha_lower = (str[index] >= 'a' && str[index] <= 'z');
		if (!is_alpha_lower)
			return (0);
		index++;
	}
	return (1);
}
/*
int main(void)
{
	char src[] = "hello";
	
	printf("%i", ft_str_is_lowercase(src));
}
*/
