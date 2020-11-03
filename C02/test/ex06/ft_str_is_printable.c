#include <unistd.h>

int		ft_str_is_printable(char	*str)
{
		int i;
		i = 0;
		while (str[i] != '\0')
		{
			if (!(str[i] >= 32 && str[i] <= 126))
			{
				return (0);
			}
			i++;
		}
		return (1);
}

int		main(void)
{
	char a[] = "@#$$ %^A%^%$";

	char c;

	c = ft_str_is_printable(a) + '0';
	write(1, &c, 1);
	return (0);
}
