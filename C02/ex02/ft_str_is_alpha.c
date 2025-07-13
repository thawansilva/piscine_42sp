/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:00:52 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/22 19:11:55 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	is_alpha_lower;
	int	is_alpha_upper;

	index = 0;
	while (str[index] != '\0')
	{
		is_alpha_lower = (str[index] >= 'a' && str[index] <= 'z');
		is_alpha_upper = (str[index] >= 'A' && str[index] <= 'Z');
		if (!(is_alpha_lower || is_alpha_upper))
			return (0);
		index++;
	}
	return (1);
}
/*
int main(void)
{
	char src[] = "hi";
	
	printf("%i", ft_str_is_alpha(src));
}
*/
