/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thawansilva <thawansilva@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 13:54:07 by thawansilva       #+#    #+#             */
/*   Updated: 2025/05/24 13:54:07 by thawansilva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

void	ft_read_file(int fd)
{
	char	buffer[BYTE];

	while (read(fd, buffer, BYTE))
	{
		ft_putchar(buffer[0]);
	}
}
