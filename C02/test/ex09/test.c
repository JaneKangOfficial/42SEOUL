#include <unistd.h>

char		*ft_strcapitalize(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}

		if (str[i-1] == 32)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return str;
}

int			main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(a);
	write(1, ft_strcapitalize(a), 100);
	return (0);
}

