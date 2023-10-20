/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:38:05 by oumondad          #+#    #+#             */
/*   Updated: 2023/09/02 20:20:18 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	x;

	x = 1;
	while (x < ac)
	{
		i = 0;
		while (av[x][i] != '\0')
		{
			write(1, &av[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}