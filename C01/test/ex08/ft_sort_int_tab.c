/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:36:32 by sakang            #+#    #+#             */
/*   Updated: 2020/10/29 19:26:10 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
		int i;
		int j;
		int temp;

		i = 0;
		while (i < size)
		{
			j = i + 1;
			if (tab[i] > tab[j])
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
		int size = 6;
 		int *tab = "6 2 5 3 4 1";
		ft_sort_int_tab(tab, size);
		return (0);
}
