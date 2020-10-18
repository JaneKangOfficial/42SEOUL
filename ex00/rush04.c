/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 20:07:28 by sakang            #+#    #+#             */
/*   Updated: 2020/10/18 20:44:33 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(int x, char first, char middle, char last)
{
	int column;

	colum = 0;
	if (x == 1)
	{
		ft_putchar(first);
	}
	else
	{
		ft_putchar(first);
		while (column < x - 2)
		{
			ft_putchar(middle);
			column++;
		}
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int row;

	row = 0;
	while (row < y)
	{
		if (row == 0)
		{
			print_row(x, 'A', 'B', 'C');
		}
		else if (row == (y - 1))
		{
			print_row(x, 'C', 'B', 'A');
		}
		else
		{
			print_row(x, 'B', ' ', 'B');
		}
		row++;
	}
}
