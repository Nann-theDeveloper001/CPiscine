/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:11:56 by nsan              #+#    #+#             */
/*   Updated: 2024/04/23 16:41:12 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*res;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * (size));
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*int	main(void)
{	
	int	min;
	int	max;
	int	*range;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 8;
	size =  ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d", range[i]);
		i++;
	}
}*/