/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:36:32 by sakang            #+#    #+#             */
/*   Updated: 2020/10/25 21:10:51 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{

		int i;
		int j;
		int temp;

		i = 0;
		while (i < size)
		{
			j = i + 1;
			if ((tab[i]) > (tab[j]))
			{
				temp = *tab[i];
				*tab[i] = *tab[j];
				*tab[j] = temp;
			}
			j++;
		}i++;

		write(1, *tab[j], 1);
}

int		main(void)
{
		int a[6] = {6,2,5,3,4,1};
		int *tab;
	   	tab	= &a;
		int size = 6;

		ft_sort_int_tab(tab, size);
		return 0;
}
