/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:27:54 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/27 09:27:54 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

void	ft_puterrno(t_app *self, char *filepath)
{
	if (!errno)
		return ;
	ft_puterr(basename(self->name));
	ft_puterr(": ");
	ft_puterr(filepath);
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
	if (!self->error)
		self->error = TRUE;
}

void	ft_display_file(t_app *self, char *filepath)
{
	int		fd;
	int		size;
	char	buffer[BYTE_BUF + 1];

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
	{
		ft_puterrno(self, filepath);
		return ;
	}
	while ((size = read(fd, buffer, BYTE_BUF)))
	{
		if (size == -1)
		{
			ft_puterrno(self, filepath);
			break ;
		}
		buffer[size] = 0;
		ft_tail(self, buffer);
	}
	if (close(fd) == -1)
		ft_puterrno(self, filepath);
}
