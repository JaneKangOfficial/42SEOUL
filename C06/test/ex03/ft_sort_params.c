#include <unistd.h>
#include <stdio.h>

void	ft_sort_params(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char *str)
{
	int i;
	char *temp;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_sort_params(argv[1]);
	return (0);
}
