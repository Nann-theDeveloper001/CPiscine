/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:33:32 by nsan              #+#    #+#             */
/*   Updated: 2024/04/20 16:42:29 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
/*int main(int argc, char **argv)
{
    (void)argc;

    int num = atoi(argv[1]);
    printf("%d\n", ft_sqrt(num));

    return 0;
}*/
