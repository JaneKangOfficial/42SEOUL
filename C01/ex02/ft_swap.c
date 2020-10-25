/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:13:22 by sakang            #+#    #+#             */
/*   Updated: 2020/10/25 20:10:10 by sakang           ###   ########.fr       */
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

	int c = 1;
	int d = 2;

	a = &c;
	b = &d;

	ft_swap(a, b);

	printf("c :%d\n", c);
	printf("*a :%d\n", *a);
	printf("%d", *b);
}
