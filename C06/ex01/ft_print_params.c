#include <unistd.h>

void	ft_print_params(char *str)
{
	while (*str)
		write(1, str++, 1);
		write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int i;
	i = 1;
	while (i < argc)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
