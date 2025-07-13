/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 10:05:27 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/14 10:05:27 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# define STDIN 0
# define STDOUT 1
# define STDERR 2
# include <unistd.h>

int		ft_atoi(char *nbr);
int		ft_is_valid(char c);
void	ft_do_op(char **args);
void	ft_puterr(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_add(int nbr1, int nbr2);
void	ft_subt(int nbr1, int nbr2);
void	ft_mult(int nbr1, int nbr2);
void	ft_div(int nbr1, int nbr2);
void	ft_mod(int nbr1, int nbr2);
#endif
