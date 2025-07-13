/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:31:22 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 10:22:04 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;	

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		while (str[i + y] != '\0' && to_find[y] != '\0'
			&& str[i + y] == to_find[y])
			y++;
		if (to_find[y] == '\0')
			return &str[i];
		i++;
	}
	return (NULL);
}

int main()
{
	char str[] = "hello world";
	char to_find[] = "o wo";

	printf("%s", ft_strstr(str, to_find));
}

