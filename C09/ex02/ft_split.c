/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thawansilva <thawansilva@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:06:15 by thawansilva       #+#    #+#             */
/*   Updated: 2025/05/22 12:06:15 by thawansilva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *src, int n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * n + 1);
	if (!dest)
		return (NULL);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_get_num_substr(char *str, char *charset)
{
	int	i;
	int	count;
	int	start;

	i = 0;
	count = 1;
	start = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) && start != i)
		{
			start = i + 1;
			count++;
		}
		else if (ft_is_sep(str[i], charset) && start == i)
			start++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		start;
	char	**split_arr;

	i = 0;
	start = 0;
	split_arr = malloc(ft_get_num_substr(str, charset) * sizeof(char *) + 1);
	if (!split_arr)
		return (NULL);
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) && start != i)
		{
			split_arr[j++] = ft_strncpy((str + start), i - start);
			start = i + 1;
		}
		else if (ft_is_sep(str[i], charset) && start == i)
			start++;
		i++;
	}
	if (start != i)
		split_arr[j++] = ft_strncpy((str + start), i - start);
	split_arr[j] = '\0';
	return (split_arr);
}
//int main(int argc, char *argv[])
//{
//	char	**arr;
//	int		size;
//	if (argc <= 2)
//		return (1);
//	arr = ft_split(argv[1], argv[2]);
//	size =  sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; arr[i]; i++) {
//		printf("%s\n", arr[i]);
//		free(arr[i]);
//	}
//	free(arr);
//	return 0;
//}
//
