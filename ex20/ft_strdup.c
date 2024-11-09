/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:08:47 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/08 17:14:46 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	taille(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*all;

	i = 0;
	all = (malloc(sizeof(char) * taille(src) + 1));
	if (!(all))
		return (NULL);
	while (src[i])
	{
		all[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (all);
}
