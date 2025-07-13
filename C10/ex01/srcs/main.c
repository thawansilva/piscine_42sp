/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:38:28 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/27 09:38:28 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

int main(int argc, char *argv[])
{
	t_app	self;

	if (argc == 1)
		return (ft_stdin(), 0);
	self = (t_app) { *argv++, 0};
	while (*argv)
		ft_display_file(&self, *argv++);
	return (self.is_error);
}
