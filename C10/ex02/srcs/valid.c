/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:11:08 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/06 11:11:08 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

t_bool	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

t_bool	ft_is_valid(char *nbytes)
{
	while (*nbytes)
	{
		if (!ft_is_digit(*nbytes++))
			return (FALSE);
	}
	return (TRUE);
}

void	ft_print_invalid_bytes(t_app *self, char *nbytes)
{
	ft_puterr(basename(self->name));
	ft_puterr(": invalid number of bytes: \'");
	ft_puterr(nbytes);
	ft_puterr("\'\n");
	self->error = TRUE;
}
