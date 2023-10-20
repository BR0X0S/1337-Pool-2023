/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:42:22 by oumondad          #+#    #+#             */
/*   Updated: 2023/09/02 19:59:32 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*swap;

	swap = *str1;
	*str1 = *str2;
	*str2 = swap;
}

int	main(int ac, char **av)
{
	int	x;
	int	y;
	int	z;

	x = 1;
	while (x < ac - 1)
	{
		y = x + 1;
		while (y < ac)
		{
			if (ft_strcmp(av[x], av[y]) > 0)
			{
				ft_swap(&av[x], &av[y]);
			}
			y++;
		}
		x++;
	}
	z = 1;
	while (z < ac)
	{
		ft_putstr(av[z]);
		write(1, "\n", 1);
		z++;
	}
}
