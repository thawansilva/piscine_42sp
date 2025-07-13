/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:43:55 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/08 09:37:06 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*cp_src;

	cp_src = malloc(sizeof(src) + 1);
	if (!cp_src)
		return (0);
	ft_strcpy(cp_src, src);
	return (cp_src);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc == 1)
		return 0;
	char	*src = ft_stdup(argv[1]);
	printf("%s\n", src);
	free(src);
}
*/
