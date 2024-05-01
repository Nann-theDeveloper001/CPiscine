/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:22:30 by nsan              #+#    #+#             */
/*   Updated: 2024/04/18 21:12:36 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > i)
		{
			res = nb * ft_recursive_factorial(nb - 1);
			return (res);
		}
	}
	return (res);
}
/*int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
}*/
