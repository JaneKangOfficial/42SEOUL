/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:08:19 by sakang            #+#    #+#             */
/*   Updated: 2020/10/29 17:57:19 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char arr[9];
	int a;

	a = 0;
	if ((0 < n) && (n < 10))
	{
		arr[n - 1];
		while (a < n)
		{
			arr[a] = a;
			write(1, arr, 1);
			a++;
		}
	}
}

int		main(void)
{
	ft_print_combn(3);
	return (0);
}
