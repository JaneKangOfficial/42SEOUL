/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:13:22 by sakang            #+#    #+#             */
/*   Updated: 2020/10/27 20:03:59 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 1;
	d = 2;
	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("c :%d\n", c);
	printf("*a :%d\n", *a);
	printf("%d", *b);
}
