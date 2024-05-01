/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:39:02 by nsan              #+#    #+#             */
/*   Updated: 2024/04/24 20:39:04 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{	
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dest == NULL)
		return (NULL);
	else
	{
		while (str[i])
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (res == NULL)
		return (0);
	else
	{
		i = 0;
		while (i < ac)
		{
			res[i].str = av[i];
			res[i].size = ft_strlen(av[i]);
			res[i].copy = ft_strdup(av[i]);
			i++;
		}
	}
	res[i].str = 0;
	return (res);
}
