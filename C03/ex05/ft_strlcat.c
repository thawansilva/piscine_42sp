/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:18:35 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 09:29:50 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = 0;
	len_src = ft_find_len(src);
	len_dest = ft_find_len(dest);
	if (size > len_dest)
	{
		while (i < size - len_dest - 1 && src[i] != '\0')
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	if (size <= len_dest)
		return (size + len_src);
	return (len_dest + len_src);
}
/*
int main()
{
	char str1[9] = "Hello";
	char str2[] = " World!";
	printf("%i\n", ft_strlcat(str1, str2, sizeof(str1)));
	printf("%s", str1);
}
*/
