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
	while (*s1 != '\0' || *s2 != '\0')
	{
		s1++;
		s2++;
		if (*s1 == *s2)
			continue;
		else if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	char *temp;
	int i;
	int result;

	i = 0;
//	ft_strcmp(argv[i], argv[i + 1]);

	//while (*s1 != '\0' || *s2 != '\0')
	while (i < argc - 1)
	{
		if (argv[i] > argv[i + 1])
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
		}
		i++;
	}
	printf("argv[i + 1] : %s\n", argv[i + 1]);
	ft_sort_params(argv[i + 1]);
	return (0);
}
