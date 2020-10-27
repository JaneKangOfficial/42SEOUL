/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:53:10 by sakang            #+#    #+#             */
/*   Updated: 2020/10/27 16:31:05 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char cn;
	char cp;

	if (n < 0)
	{
		cn = 'N';
		write(1, &cn, 1);
	}
	else
	{
		cp = 'P';
		write(1, &cp, 1);
	}
}

int		main(void)
{
	int a;

	a = 1;
	ft_is_negative(a);
}
