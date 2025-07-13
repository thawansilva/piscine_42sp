/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:52:59 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/20 20:28:16 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	char	c;

	c = '\n';
	rush(5, 3);
	ft_putchar(c);
	rush(5, 1);
	ft_putchar(c);
	rush(1, 1);
	ft_putchar(c);
	rush(1, 5);
	ft_putchar(c);
	rush(4, 4);
	return (0);
}
