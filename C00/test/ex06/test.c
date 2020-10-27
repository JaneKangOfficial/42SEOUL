/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:37:43 by sakang            #+#    #+#             */
/*   Updated: 2020/10/22 16:52:53 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(int a, int b, int c, int d);

int main(void)
{
	ft_print_comb2();
	return 0;
}

void ft_putchar(int a, int b, int c, int d)
{
	char ac;
	char bc;
	char cc;
	char dc;

	ac = (char) a;
	bc = (char) b;
	cc = (char) c;
	dc = (char) d;


	write(1, &ac, 1);
	write(1, &bc, 1);
	write(1, " ", 1);
	write(1, &cc, 1);
	write(1, &dc, 1);
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

	
	
	while ( (a <= '9') && (b <= '8') && (c <= '9') && (d <= '9'))
	{
		d++;
		
		if (d > '9')
		{
			d = '0';
			c++;
			ft_putchar(a, b, c, d);
			
		}

		ft_putchar(a, b, c, d);
	}





}



