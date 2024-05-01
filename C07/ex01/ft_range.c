/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:11:31 by nsan              #+#    #+#             */
/*   Updated: 2024/04/23 16:11:35 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;
	int	range;

	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	res = (int *)malloc(sizeof(int) * (range));
	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i = 0;
	int	*res;
	int	range;

	i = 0;
	min = 2;
	max = 10;
	range = max - min;
	res = ft_range(min, max);
	while (i < range)
	{
		printf("%d", res[i]);
		i++;
	}
}*/
