/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:57:40 by sakang            #+#    #+#             */
/*   Updated: 2020/10/27 16:38:12 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

int		main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	int i;
	int a;
	char c;

	i = 0;
	int n[] = {1, 2, 3};
	int nlength = sizeof(n) / sizeof(int);
	while (i < nlength + 1)
	{
		a = n[i];
		i++;
	
	c = (char)a;
	write(1, &c, 1);
	}
}
