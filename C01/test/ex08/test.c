/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:36:32 by sakang            #+#    #+#             */
/*   Updated: 2020/10/25 19:49:49 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{

		int i;
		i = 0;

		int a[0];

		int b;
		

		while (*tab != '\n')
		{
			b = *tab % 10;
			printf("\nb = \n""%d\n", b);
			*tab /= 10;

			if(i < size)
			{
				printf("\nif b = \n""%d\n", b);
				a[i] = b;

				printf("\n""a[i] = \n""%d\n", a[i]);
				i++;
			}
			tab++;
		}



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
