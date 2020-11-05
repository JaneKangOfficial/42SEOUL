/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:11:29 by sakang            #+#    #+#             */
/*   Updated: 2020/11/05 22:12:23 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		main(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_rev_params(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
