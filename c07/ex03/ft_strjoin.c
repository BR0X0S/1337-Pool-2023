/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:06:38 by oumondad          #+#    #+#             */
/*   Updated: 2023/09/05 10:15:03 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}

int	totalen(int size, char **strs, char *sep)
{
	int	i;
	int	alllens;

	i = 0;
	alllens = 0;
	while (i < size)
	{
		alllens += ft_strlen(strs[i]);
		if (i < size - 1)
			alllens += ft_strlen(sep);
		i++;
	}
	return (alllens);
}

void	cat_on_it(int size, char **strs, char *sep, char *result)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*emptystr;
	int		alllens;

	if (size == 0)
	{
		emptystr = malloc(1);
		if (emptystr == NULL)
			return (0);
		emptystr[0] = 0;
		return (emptystr);
	}
	alllens = totalen(size, strs, sep);
	result = malloc(alllens + 1);
	if (result == NULL)
		return (0);
	result [0] = '\0';
	cat_on_it(size, strs, sep, result);
	return (result);
}
