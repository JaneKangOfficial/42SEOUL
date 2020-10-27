/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:29:21 by sakang            #+#    #+#             */
/*   Updated: 2020/10/27 20:54:35 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	array[5];

	a = 0;
	while (a <= 98)
	{
		array[0] = a / 10 + '0';
		array[1] = a % 10 + '0';
		b = a + 1;
		while (b <= 99)
		{
			array[2] = ' ';
			array[3] = b / 10 + '0';
			array[4] = b % 10 + '0';
			write(1, array, 5);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
