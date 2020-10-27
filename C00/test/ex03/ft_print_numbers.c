/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:47:24 by sakang            #+#    #+#             */
/*   Updated: 2020/10/27 20:56:44 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = '0';
	while (i <= '9')
	{
		c = (char)i;
		write(1, &c, 1);
		i++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
