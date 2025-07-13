/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 09:05:22 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/29 09:05:22 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# include "ft_boolean.h"
# include <unistd.h>
# include <stdlib.h>
# include <libgen.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# define STDIN 0
# define STDOUT 1
# define STDERR 2
# define BYTE_BUF 28672

typedef struct s_app
{
	char	*name;
	char	**paths;
	t_bool	error;
	t_bool	is_single;
	int		num_bytes;
}	t_app;
void	ft_display_file(t_app *self, char *filepath);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
void	ft_stdin(void);
int		ft_atoi(char *nbr);
t_bool	ft_is_digit(char c);
t_bool	ft_is_valid(char *nbytes);
void	ft_print_invalid_bytes(t_app *self, char *nbytes);
void	ft_tail(t_app *self, char *nbytes);
#endif
