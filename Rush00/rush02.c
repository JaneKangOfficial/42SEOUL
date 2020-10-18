/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 19:22:45 by sakang            #+#    #+#             */
/*   Updated: 2020/10/18 20:42:57 by sakang           ###   ########.fr       */
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
		while (column < (x - 2))
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
			print_row(x, 'A', 'B', 'A');
		}
		else if (row == (x - 1))
		{
			print_row(x, 'C', 'B', 'C');
		}
		else
		{
			print_row(x, 'B', ' ', 'B');
		}
		row++;
	}
}
