/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:45 by oumondad          #+#    #+#             */
/*   Updated: 2023/08/17 17:21:59 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_short(int a)
{
	char	b;

	b = (a / 10) + '0';
	write(1, &b, 1);
	b = (a % 10) + '0';
	write(1, &b, 1);
}

void	space_comma(int i)
{
	if (i != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_short(x);
			write(1, " ", 1);
			ft_short(y);
			space_comma(x);
			y++;
		}
		x++;
	}
}
