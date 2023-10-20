/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:12:57 by oumondad          #+#    #+#             */
/*   Updated: 2023/09/05 10:22:07 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	x;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	x = max - min;
	tab = malloc(x * sizeof(int));
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < x)
	{
		tab[i] = min + i;
		i++;
	}
	return (x);
}
