/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <sakang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:46:42 by sakang            #+#    #+#             */
/*   Updated: 2020/11/05 13:59:32 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (0);
	while (*str)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	if (str != to_find)
		return (0);
	return (0);
}

int		main(void)
{
	char *a;
	char *b;

	a = "abceh";
	b = "abc";
	ft_strstr(a, b);
	printf("my : %s\n", ft_strstr(a, b));
	printf("strstr : %s\n", strstr(a, b));
	return (0);
}
