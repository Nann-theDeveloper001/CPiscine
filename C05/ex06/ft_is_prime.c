/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:17:45 by nsan              #+#    #+#             */
/*   Updated: 2024/04/20 16:40:47 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{	
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

/*int	main(void)
{
	printf("%d",ft_is_prime(0));
	printf("%d", ft_is_prime(1));
	printf("%d", ft_is_prime(2));
	printf("%d", ft_is_prime(25));
	printf("%d", ft_is_prime(13));
	printf("%d", ft_is_prime(71));

}*/
