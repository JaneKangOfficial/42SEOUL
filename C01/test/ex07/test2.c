/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:36:20 by sakang            #+#    #+#             */
/*   Updated: 2020/10/25 18:23:40 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{

	int i;
	int temp;

	printf("%d\n", *tab);
	printf("%d\n", size);
	printf("%d\n\n\n", tab[size]);


	i = 0;
	int a;
	a = size -1;

	while ( i < a)
	{
		temp = tab[i];
		tab[i] = tab[a];
		tab[a] = temp;

		i++;
		a--;

		printf("!!!!!!!!!!!\n""%d", tab[a]);
		printf("^^^^^^^^^^\n""%d", temp);

	}
	printf("########!!!!!!!!#########\n""%d""\n", tab[a]);
}


int	main(void)
{

	int *tab;
	int size;

	int a = 12345;

	tab = &a;
	size = 5;

	ft_rev_int_tab(tab, size);
	return 0;
}
