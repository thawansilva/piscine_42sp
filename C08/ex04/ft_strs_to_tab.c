/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thawansilva <thawansilva@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:28:48 by thawansilva       #+#    #+#             */
/*   Updated: 2025/05/19 11:28:50 by thawansilva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_strcpy(char *dest, char *src)
{
	int	len;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (1);
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (0);
}

struct s_stock_str	ft_create_stock_str(char *str)
{
	struct s_stock_str	stock;
	int					len;

	len = ft_strlen(str);
	stock.str = malloc(sizeof(char) * len);
	stock.size = len;
	stock.str = str;
	stock.copy = (void *)0;
	ft_strcpy(stock.copy, str);
	return (stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr_str;

	i = 0;
	arr_str = malloc(sizeof(struct s_stock_str) * ac + 1);
	if (!arr_str)
		return (NULL);
	while (i < ac)
	{
		arr_str[i] = ft_create_stock_str(av[i]);
		i++;
	}
	return (arr_str);
}
