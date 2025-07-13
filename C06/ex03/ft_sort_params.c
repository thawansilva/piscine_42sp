/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:26:58 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 13:56:18 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_sort_str(char *str)
{
	int	i;
	int	j;
	int	smaller_char;
	int	temp;

	i = 0;
	while (str[i] != '\0')
	{
		smaller_char = i;
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] < str[smaller_char])
				smaller_char = j;
			j++;
		}
		if (smaller_char != i)
		{
			temp = str[i];
			str[i] = str[smaller_char];
			str[smaller_char] = temp;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	if (argc == 1)
		return (1);
	i = 1;
	while (argv[i] != (void *)0)
	{
		j = 0;
		ft_sort_str(argv[i]);
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
