#include <unistd.h>

char		*ft_strcapitalize(char *str)
{
	int i;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[i] <= 'z')
		{
			str[0] -= 32;
		}
		else if (str[i] >='A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i-1] == 32 || str[i-1] == 45 || str[i-1] == 43)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return str;
}

int			main(void)
{
	//char a[] = "     salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char a[] = "ReKt17+LOl MdR Mdr 4242l42";

	ft_strcapitalize(a);
	write(1, ft_strcapitalize(a), sizeof(a));
	return (0);
}

