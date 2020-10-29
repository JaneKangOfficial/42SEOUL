/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:06:08 by sakang            #+#    #+#             */
/*   Updated: 2020/10/29 17:44:55 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	final(int i, int nb)
{
	char	arr[i];
	int		a;

	a = 0;
	while (a < i)
	{
		a++;
		arr[i - a] = nb % 10 + '0';
		nb /= 10;
	}
	write(1, arr, i);
}

void	digit(int nb)
{
	int i;
	int j;

	i = 0;
	j = nb;
	while (j > 0)
	{
		j /= 10;
		i++;
	}
	final(i, nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	digit(nb);
}

int		main(void)
{
	ft_putnbr(345);
	return (0);
}
