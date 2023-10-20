/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:45:56 by oumondad          #+#    #+#             */
/*   Updated: 2023/08/21 10:48:56 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	x;
	int	y;

	x = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				swap = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = swap;
			}
			y++;
		}
		x++;
	}
}
