/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:30:31 by oumondad          #+#    #+#             */
/*   Updated: 2023/08/21 10:48:59 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	s;

	s = size / 2;
	i = 0;
	while (i < s)
	{
		x = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = x;
		i++;
		size--;
	}
}
