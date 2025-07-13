/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:57:50 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/08 14:10:32 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *dest, char *src, char *sep)
{
	int	i;
	int	j;
	int	len_dest;

	i = 0;
	j = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	while (sep[j])
	{
		dest[len_dest + i + j] = sep[j];
		j++;
	}
	dest[len_dest + i + j] = '\0';
}

int	ft_get_full_array_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	full_len;

	i = 0;
	full_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		full_len += j;
		j = 0;
		while (sep[j])
			j++;
		full_len += j;
		i++;
	}
	return (full_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_len;
	char	*str_cat;

	i = 0;
	if (size <= 0)
		return (malloc(0));
	full_len = ft_get_full_array_size(size, strs, sep);
	str_cat = malloc(full_len + sizeof(char *) + 1);
	if (!str_cat)
		return (0);
	while (i < size)
	{
		if (i != size - 1)
			ft_strcat(str_cat, strs[i], sep);
		else
			ft_strcat(str_cat, strs[i], "");
		i++;
	}
	return (str_cat);
}
/*
#include <stdio.h>
int main(void)
{
	char	*strs[] = {"hello", "world"};
	int		size = sizeof(strs) / sizeof(strs[0]);
	char	*new_str = ft_strjoin(size, strs, "");
	printf("%s\n", new_str);
	free(new_str);
	return 0;
}
*/
