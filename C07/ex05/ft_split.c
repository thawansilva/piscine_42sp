/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thawansilva <thawansilva@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:29:25 by thawansilva       #+#    #+#             */
/*   Updated: 2025/05/19 11:30:31 by thawansilva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *src, int n)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(n * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < n && src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
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

int	ft_get_num_elements(char *str, char *charset)
{
	int	i;
	int	j;
	int	start;
	int	count;

	count = 1;
	while (str[i])
	{
		j = 0;
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
	char	**mat_str;

	i = 0;
	start = 0;
	mat_str = malloc(ft_get_num_elements(str, charset) * sizeof(char *) + 1);
	if (!mat_str)
		return (NULL);
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) && start != i)
		{
			mat_str[j++] = ft_strncpy((str + start), i - start);
			start = i + 1;
		}
		else if (ft_is_sep(str[i], charset) && start == i)
			start++;
		i++;
	}
	if (start != i)
		mat_str[j++] = ft_strncpy((str + start), i - start);
	mat_str[j] = '\0';
	return (mat_str);
}
//
//int main(int argc, char *argv[])
//{
//	char	**arr;
//	int		size;
//	if (argc <= 2)
//		return (1);
//	arr = ft_split(argv[1], argv[2]);
//	size =  sizeof(arr) / sizeof(char *);
//	for (int i = 0; arr[i]; i++) {
//		printf("%s\n", arr[i]);
//		free(arr[i]);
//	}
//	free(arr);
//	return 0;
//}
//
