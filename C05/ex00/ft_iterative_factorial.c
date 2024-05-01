/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:42:20 by nsan              #+#    #+#             */
/*   Updated: 2024/04/18 21:10:46 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > i)
		{
			res = nb * res;
			nb--;
		}
	}
	return (res);
}
/*int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
}*/

//factorial = 4!= 4 * 3 * 2 * 1;
