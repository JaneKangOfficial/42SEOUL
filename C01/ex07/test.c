/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:36:20 by sakang            #+#    #+#             */
/*   Updated: 2020/10/25 17:07:11 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int r;
	r = 0;

	printf("%d\n", *tab);
	printf("%d\n", size);

	while(*tab != 0)
	{
		r *= 10;
		r += *tab % 10;
		*tab /= 10;
			
	}
	printf("%d", r);
}


int	main(void)
{

	int *tab;
	int size;

	int a = 123;

	tab = &a;
	size = 3;

	ft_rev_int_tab(tab, size);
	return 0;
}
