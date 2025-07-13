/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 09:28:15 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/29 09:28:15 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

void	ft_tail(t_app *self, char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i++])
		;
	if (!self->is_single)
	{
		ft_putstr("==> ");
		ft_putstr(*(self->paths));
		ft_putstr(" <==\n");
	}
	if (i <= self->num_bytes)
		ft_putstr(&buffer[0]);
	else
		ft_putstr(&buffer[i - self->num_bytes - 1]);
	if (*(self->paths + 1))
		ft_putstr("\n");
}

int	main(int argc, char *argv[])
{
	t_app	self;

	if (argc < 3)
		return (ft_puterr("Usage: ./ft_tail -c [number] [file]\n"), 1);
	self = (t_app){.name = *argv++, .error = FALSE, .is_single = FALSE};
	if (!ft_is_valid(*(++argv)))
		ft_print_invalid_bytes(&self, *argv);
	else if (argc == 3)
		ft_stdin();
	else
	{
		self.num_bytes = ft_atoi(*argv++);
		if (argc == 4)
			self.is_single = TRUE;
		self.paths = argv;
		while (*(self.paths))
		{
			ft_display_file(&self, *(self.paths));
			self.paths++;
		}
	}
	return (self.error);
}
