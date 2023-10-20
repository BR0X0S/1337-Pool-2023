/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:23:35 by oumondad          #+#    #+#             */
/*   Updated: 2023/09/05 10:15:20 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	y;
	int	*result;

	if (min >= max)
		return (NULL);
	x = 0;
	y = max - min;
	result = malloc(y * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (x < y)
	{
		result[x] = min + x;
		x++;
	}
	return (result);
}
