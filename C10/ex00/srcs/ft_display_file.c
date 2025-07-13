/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thawansilva <thawansilva@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:15:51 by thawansilva       #+#    #+#             */
/*   Updated: 2025/05/23 09:15:51 by thawansilva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

int main(int argc, char *argv[])
{
	int	fd;

	if (argc == 1)
		return (ft_putstr("File name missing.\n"), 1);
	else if (argc > 2)
		return (ft_putstr("Too many arguments.\n"), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_putstr("Cannot read file.\n"), 1);
	ft_read_file(fd);
	close(fd);
	return 0;
}
