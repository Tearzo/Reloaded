/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:35:55 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/09 11:31:30 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (ac != 1)
	{
		while (av[x])
		{
			while (av[x][i])
			{
				ft_putchar(av[x][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			x++;
		}
	}
	return (0);
}
