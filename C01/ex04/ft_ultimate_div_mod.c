/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:49:48 by nsan              #+#    #+#             */
/*   Updated: 2024/04/17 14:04:44 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{
    int x = 17;
    int y = 5;

    printf("Before division:\n");
    printf("x = %d, y = %d\n", x, y);

    ft_ultimate_div_mod(&x, &y);

    printf("After division:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}*/
