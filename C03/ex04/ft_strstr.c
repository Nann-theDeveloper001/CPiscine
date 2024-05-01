/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:03:29 by nsan              #+#    #+#             */
/*   Updated: 2024/04/16 15:55:36 by nsan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>
//#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{	
	char	*ptr;
	int		i;

	ptr = str;
	if (*to_find == 0)
		return (str);
	while (*ptr)
	{
		i = 0;
		while (to_find[i] && ptr[i] == to_find[i])
		{
			i++;
			if (!to_find[i])
				return (ptr);
		}
		ptr++;
	}
	return (0);
}

/*int	main(void)
{	
	char	str[] = "hello2qwer";
	char	tofind[] = "qwer";
	//char	st = ft_strstr(str,tofind);
	printf("%c", *ft_strstr(str, tofind));
}*/
