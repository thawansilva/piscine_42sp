/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:39:08 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/22 18:39:08 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*last;

	last = *begin_list;
	node = ft_create_elem(data);
	if (*begin_list)
	{
		while (last->next)
			last = last->next;
		last->next = node;
	}
	else
	{
		*begin_list = node;
	}
}
