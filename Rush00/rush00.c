/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:27:02 by sakang            #+#    #+#             */
/*   Updated: 2020/10/18 21:39:37 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(int x, char side, char middle)
{
	int column;

	column = 0;
	if (x == 1)
	{
		ft_putchar(side);
	}
	else
	{
		ft_putchar(side);
		while (column < x - 2)
		{
			ft_putchar(middle);
			column++;
		}
		ft_putchar(side);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int row;

	row = 0;
	while (row < y)
	{
		if (row == 0 || row == (y - 1))
		{
			print_row(x, 'o', '-');
		}
		else
		{
			print_row(x, '|', ' ');
		}
		row++;
	}
}
