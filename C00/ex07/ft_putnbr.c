#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(345);
	return 0;
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11); 
	}

	if (nb < '0')
	{
		nb = -nb;
		write(1, "-", 1);
	}
	
}

