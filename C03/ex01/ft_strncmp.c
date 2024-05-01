/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:58:01 by nsan              #+#    #+#             */
/*   Updated: 2024/04/16 19:37:49 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(int argc, char *argv[])
{
	argc = 3;
	printf ("%d", ft_strncmp(argv[1], argv[2], 6));
	return (0);
}*/
