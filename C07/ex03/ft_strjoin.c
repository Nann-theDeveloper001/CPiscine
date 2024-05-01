/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:17:59 by nsan              #+#    #+#             */
/*   Updated: 2024/04/23 21:09:41 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_strseplen(int size, char **strs, char *sep)
{
	int	j;
	int	i;
	int	strlen;

	i = 0;
	strlen = 0;
	while (i < size)
	{	
		j = 0;
		while (strs[i][j] != 0)
		{
			strlen++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != 0)
		i++;
	strlen += i * (size - 1);
	return (strlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		i;
	int		j;
	int		x;
	char	*dest;

	if (size == 0)
		return ((char *)malloc(1));
	dest = (char *)malloc(sizeof(char) * ft_strseplen(size, strs, sep) + 1);
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[x++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j] != 0)
				dest[x++] = sep[j++];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char *strs[] = {"Hello", "world", "hi"};
	char sep[] = "-";
	printf("%s", ft_strjoin(2, strs, sep));

}*/