/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:29:53 by sakang            #+#    #+#             */
/*   Updated: 2020/11/03 13:24:12 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{

	unsigned int i;
	unsigned int j;
	char *a;
	char *temp;

	i = 0;
	j = 0;
	if (size == 0)
	{
		dest[i] = '\0';
	}
	
	temp = dest;
	while (i < (size - 1))
	{
		while (*dest)
		{
			dest++;
			i++;
		}
		while (*str)
		{
			dest++;
			str++;
			i++;
			//write(1, dest, 1);
		}
	}
	
	//	dest[i] = '\0';
	//	i++;
		printf("%s", temp);
	return size;
}

int		main(void)
{
	unsigned int a = 8;
	char b[] = "Hello";
	char c[] = "World";

	ft_strlcpy(b, c, a);
	//printf("%s", b);
	return (0);
}
