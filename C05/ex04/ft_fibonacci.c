#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

int		main(void)
{
	int a;

	a = 3;
	ft_fibonacci(a);
	printf("my : %d\n", ft_fibonacci(a));
	return (0);
}
