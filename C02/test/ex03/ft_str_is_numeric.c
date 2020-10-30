#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char a[] = "23a5";

	char c;
	c = ft_str_is_numeric(a) + '0';
	write(1, &c, 1);
	return (0);
}
