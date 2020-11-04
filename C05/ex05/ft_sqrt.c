#include <stdio.h>

int		ft_sqrt(int nb)
{
	long long  result;

	result = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result * result  <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}

int		main(void)
{
	int a;

	a = 25;
	ft_sqrt(a);
	printf("my : %d\n", ft_sqrt(a));
	return (0);

}
