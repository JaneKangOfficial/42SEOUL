#include <unistd.h>

int		ft_str_is_alpha(char *str)
{

	int i;
	i = 0;

	while (str[i] != '\0')
	{
		
		if ((('A' > str[i]) || (str[i] > 'Z')) && (('a' > str[i]) || (str[i] > 'z')))
		{
			return (0);
		}
		else
		{
			return (1);
		}

		i++;
	}
	return (1);
}

int		main(void)
{
	char *a;
	a = "abcdef";

	char c;
	c = ft_str_is_alpha(a) + '0';

	write(1, &c, 1);
	return (0);
}
