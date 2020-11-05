#include <stdio.h>

int		ft_is_prime(int nb)
{
	long long i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	printf("ft_is_prime(i) : %d\n", ft_is_prime(i));
	while (ft_is_prime(i) != 1)
	{
		nb++;
		ft_is_prime(nb);
	}
	return (nb);
}

int	main(void)
{
	int a;

	a = 6;
	ft_find_next_prime(a);
	printf("my : %d\n", ft_find_next_prime(a));
	return (0);
}
