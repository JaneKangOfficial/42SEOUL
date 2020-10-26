#include <unistd.h>

char		*ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int			main(void)
{
	char a[] = "abcde";
	ft_strupcase(a);
	write(1, ft_strupcase(a), 5);
	return (0);
}
