#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		while (*to_find)
		{
			if (*str == *to_find)
			{
				write(1, str, 1);
			}

			if (*str == '\0')
			{
				return str;
			}

			to_find++;
		}
		str++;
	}
	return str;
}

int		main(void)
{
	char *a;
	char *b;

	a = "abceh";
	b = "bcdfg";

	ft_strstr(a, b);
	return (0);
}
