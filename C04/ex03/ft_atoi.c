/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:56:57 by nsan              #+#    #+#             */
/*   Updated: 2024/04/20 15:43:19 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	ft_atoi(char *str)
{	
	int	count;
	int	i;
	int	nb;

	count = 1;
	i = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{		
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= count;
	return (nb);
}
int	main(void)
{	
	char	str[] = "---+-+123s56o";
	printf("%d\n", ft_atoi(str));
}
