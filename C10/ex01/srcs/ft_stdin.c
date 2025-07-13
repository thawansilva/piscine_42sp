/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:50:06 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/27 09:50:06 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

void	ft_stdin(void)
{
	int		size;
	char	buffer[BYTE_BUF + 1];

	while ((size = read(STDIN, buffer, BYTE_BUF)))
	{
		buffer[size] = 0;
		ft_putstr(buffer);
	}
}
