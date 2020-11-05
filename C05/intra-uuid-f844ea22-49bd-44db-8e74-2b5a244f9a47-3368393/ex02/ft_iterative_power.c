/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:24:50 by sakang            #+#    #+#             */
/*   Updated: 2020/11/05 18:27:29 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
