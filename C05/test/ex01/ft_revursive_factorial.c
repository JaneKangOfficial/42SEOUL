#include <string.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{

	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	int a = 5;
	ft_recursive_factorial(a);
	printf("my : %d\n", ft_recursive_factorial(a));
	return (0);
}
