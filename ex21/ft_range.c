/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:49:53 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/09 11:23:50 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*i;
	int	x;

	if (min >= max)
		return (NULL);
	i = malloc(sizeof(*i) * (max - min));
	if (i == 0)
		return (NULL);
	else
	{
		x = 0;
		while (min < max)
		{
			i[x] = min;
			x++;
			min++;
		}
		return (tab);
	}
}
