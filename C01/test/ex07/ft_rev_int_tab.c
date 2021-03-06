/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:36:20 by sakang            #+#    #+#             */
/*   Updated: 2020/10/29 18:08:28 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int r;

	r = 0;
	while (size != 0)
	{
		r *= 10;
		r += *tab % 10;
		*tab /= 10;
		size--;
	}
}

int		main(void)
{
	int *tab;
	int size;
	int a;

	a = 123;
	tab = &a;
	size = 3;
	ft_rev_int_tab(tab, size);
	return (0);
}
