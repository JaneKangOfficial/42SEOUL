/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <sakang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:20:16 by sakang            #+#    #+#             */
/*   Updated: 2020/11/05 18:07:27 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int sign;
	unsigned int n;
	int i;

	sign = 0;
	n = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	if ((n > 2147483647 && sign == 0) || (n > 2147483648 && sign == 1))
		return (0);
	return ((int) (sign % 2 == 1? -n : n));
}

int		main(void)
{
	char a[20] = "   ---+--+1234ab567";
	ft_atoi(a);
	printf("atoi : %d\n", atoi(a));
//	printf("my : %d\n", ft_atoi(a));
	//-1234 출력결과
	return (0);
}
