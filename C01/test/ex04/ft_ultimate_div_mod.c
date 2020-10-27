/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:37:29 by sakang            #+#    #+#             */
/*   Updated: 2020/10/27 20:09:29 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = a / b;
	*b = a % b;
}

int		main(void)
{
	int *a;
	int *b;

	a = 2;
	b = 6;
	ft_ultimate_div_mod(a, b);
	printf("%d", *a);
	printf("%d", *b);
}
