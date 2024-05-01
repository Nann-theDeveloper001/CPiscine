/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:00:26 by nsan              #+#    #+#             */
/*   Updated: 2024/04/20 14:35:22 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	put_char(char c)
{	
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	long	n;

	n = nb;
	if (n < 0)
	{
		put_char('-');
		n *= -1;
	}
	if (n >= 10)
	{	
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n += '0';
		put_char(n);
	}
}

/*int	main(void)
{	
	ft_putnbr(25555555);
}*/
