/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:29:14 by nsan              #+#    #+#             */
/*   Updated: 2024/04/18 21:15:11 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
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
			return (nb * ft_recursive_power(nb, power - 1));
	}
	return (res);
}
/*int	main(void)
{
	printf("%d", ft_recursive_power(2, 0));

}*/
