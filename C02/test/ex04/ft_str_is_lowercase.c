#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char a[] = "abDc";

	char c;
	c = ft_str_is_lowercase(a) + '0';
	write(1, &c, 1);
	return (0);
}
