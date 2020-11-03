/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:55:48 by sakang            #+#    #+#             */
/*   Updated: 2020/11/03 18:40:49 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		i++;
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}

	}
	return (0);
}

int		main(void)
{
	char *a;
	char *b;
	unsigned int c;
	char d;

	a = "Hella";
	b = "Hell";
	c = 5;
	d = ft_strncmp(a, b, c);
	printf("%d\n", d);
	//write(1, &d, 1);
	return (0);

}
