/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:14:56 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/01 11:22:51 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		len;
	int		i;
	char	c;

	if (argc == 1)
		return (1);
	len = 0;
	while (argv[len] != (void *)0)
		len++;
	len--;
	while (len > 0)
	{
		i = 0;
		while (argv[len][i] != '\0')
		{
			c = argv[len][i];
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		len--;
	}
}
