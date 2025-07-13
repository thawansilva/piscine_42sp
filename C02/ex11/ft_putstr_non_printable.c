/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 08:50:29 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/23 18:11:58 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int value)
{
	char	div;
	char	mod;

	write(1, "\\", 1);
	div = value / 16;
	mod = value % 16;
	if (div >= 10)
		div = div - 10 + 'a';
	else
		div += '0';
	if (mod >= 10)
		mod = mod - 10 + 'a';
	else
		mod += '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
			write(1, &str[index], 1);
		else
		{
			ft_print_hex(str[index]);
		}
		index++;
	}
}

int main(void)
{
	char src[] = "Hello\nhow are you?\b";
	ft_putstr_non_printable(src);
}

