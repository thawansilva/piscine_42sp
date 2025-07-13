/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:16:08 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/23 19:40:34 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	is_prev_alphanum;

	index = 0;
	is_prev_alphanum = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z' && !is_prev_alphanum)
		{
			str[index] -= 32;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z' && is_prev_alphanum)
		{
			str[index] += 32;
		}
		if ((str[index] >= '0' && str[index] <= '9')
			|| (str[index] >= 'A' && str[index] <= 'Z')
			|| (str[index] >= 'a' && str[index] <= 'z'))
			is_prev_alphanum = 1;
		else
			is_prev_alphanum = 0;
		index++;
	}
	return (str);
}
/*
int main(void)
{
	char *src = "HeLlo how are-you?";
	
	printf("%s", ft_strcapitalize(src));
}
*/
