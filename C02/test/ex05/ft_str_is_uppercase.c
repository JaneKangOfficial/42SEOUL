#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char a[] = "ABdC";
	char c;

	c = ft_str_is_uppercase(a) + '0';
	write(1, &c, 1);
	return (0);
}
