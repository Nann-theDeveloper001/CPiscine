/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:57:01 by nsan              #+#    #+#             */
/*   Updated: 2024/04/18 21:13:20 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{	
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power >= i)
		{
			res *= nb;
			power--;
		}
		return (res);
	}
	return (res);
}
/*int	main(void)
{
	printf("%d", ft_iterative_power(5,3));
}*/
