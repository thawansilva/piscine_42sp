/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:23:05 by thaperei          #+#    #+#             */
/*   Updated: 2025/06/30 10:23:05 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ft_list.h"

int	ft_cmp(void *data1, void *data2)
{
	if (!data1 || !data2)
		return (0);
	return (*(int *)data1 - *(int *)data2);
}

void	ft_swap_data(t_list *node1, t_list *node2)
{
	void	*temp;

	temp = node1->data;
	node1->data = node2->data;
	node2->data = temp;
}

int	ft_get_list_length(t_list *list)
{
	int	size;

	size = 0;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*temp;
	int		size;
	int		i;

	size = ft_get_list_length(*begin_list);
	i = 0;
	while (i < size)
	{
		temp = *begin_list;
		while (temp)
		{
			if (temp->next && cmp(temp->data, temp->next->data) > 0)
			{
				ft_swap_data(temp, temp->next);
			}
			else
				temp = temp->next;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int n = 0, n1 = 2, n2 = 4, n3 = -10;
	t_list	*el = ft_create_elem(&n2);
	el->next = ft_create_elem(&n1);
	el->next->next = ft_create_elem(&n);
	el->next->next->next = ft_create_elem(&n3);
	ft_list_sort(&el, &ft_cmp);
	while (el)
	{
		printf("%i\n", *(int *)el->data);
		el = el->next;
	}
	return 0;
}
