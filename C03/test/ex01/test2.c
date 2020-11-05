/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:55:48 by sakang            #+#    #+#             */
/*   Updated: 2020/11/05 11:15:17 by sakang           ###   ########.fr       */
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
		return (0);
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		i++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	char *a;
	char *b;
	unsigned int c;
	char d;

	a = "Helloo";
	b = "Hello";
	c = 5;
	d = ft_strncmp(a, b, c);
	printf("my : %d\n", d);
	printf("strncmp : %d\n", strncmp(a, b, c));
	//write(1, &d, 1);
	return (0);

}
