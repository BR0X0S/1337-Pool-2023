/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:56:21 by oumondad          #+#    #+#             */
/*   Updated: 2023/08/27 16:04:19 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == 0)
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (to_find[y] == str[x + y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (str + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}
