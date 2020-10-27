/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:37:43 by sakang            #+#    #+#             */
/*   Updated: 2020/10/22 18:26:18 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char a, char b, char c, char d);

int main(void)
{
	ft_print_comb2();
	return 0;
}

void ft_putchar(char a, char b, char c, char d)
{

	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';

	while ((a <= '9') && (b <= '8') && (c <= '9') && (d <= '9'))
	{
		d++;

		if (d > '9')
		{
			d = '0';
			c++;
			ft_putchar(a, b, c, d);
			d++;
		}

		if (c > '9')
		{
			c = '0';
			b++;
			ft_putchar(a, b, c, d);
			c++;
		}


		ft_putchar(a, b, c, d);	
	}





}



