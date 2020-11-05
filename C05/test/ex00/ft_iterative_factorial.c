#include <string.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int result;
	
	result = 1;
	if (nb < 0)
		return (0);
	while(nb)
		result *=nb--;
	return (result);
}

int		main(void)
{
	int a = 6;
	ft_iterative_factorial(a);
	printf("my : %d\n", ft_iterative_factorial(a));
	return (0);
}
