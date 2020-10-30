#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char a[] = "ABC";

	ft_strlowcase(a);
	write(1, ft_strlowcase(a), 5);
	return (0);
}
