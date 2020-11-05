#include <unistd.h>
#include <stdio.h>

void	print(int nb)
{
	int		a;
	char	c;

	if (nb < 0)
		write(1, "-", 1);
	if (nb != 0)
	{
		a = nb % 10;
		nb /= 10;
		if (nb < 0)
			nb *= -1;
		if (a < 0)
			a *= -1;
		print(nb);
		c = a + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		print(nb);
}

int		main(void)
{
	int a;
	a = 42;
	ft_putnbr(a);

}
