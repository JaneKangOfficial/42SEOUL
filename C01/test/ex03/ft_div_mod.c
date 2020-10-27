/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:20:31 by sakang            #+#    #+#             */
/*   Updated: 2020/10/27 20:05:37 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 2;
	b = 6;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d", *mod);
}
