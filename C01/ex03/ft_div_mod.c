/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:20:31 by sakang            #+#    #+#             */
/*   Updated: 2020/10/25 20:11:21 by sakang           ###   ########.fr       */
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
	int a = 2;
	int b = 6;

	int *div;
	div = &a;
	int *mod;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d", *mod);
}
