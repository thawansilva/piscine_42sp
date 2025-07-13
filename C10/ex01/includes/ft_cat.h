/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thawansilva <thawansilva@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 14:45:30 by thawansilva       #+#    #+#             */
/*   Updated: 2025/05/24 14:45:30 by thawansilva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include <string.h>
# include <errno.h>
# include <unistd.h>
# include <libgen.h>
# include <fcntl.h>

# define BYTE_BUF 30720 
# define STDIN 0
# define STDOUT 1
# define STDERR 2

typedef struct s_app
{
	char	*name;
	int		is_error;
}	t_app;

void	ft_putstr(char *str);
void	ft_display_file(t_app *self, char *filename);
void	ft_putchar(char c);
void	ft_puterr(char *msg);
void	ft_stdin(void);
#endif
