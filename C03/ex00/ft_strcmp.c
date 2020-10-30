#include <unistd.h>
//#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		s1++;
		s2++;

		if (*s1 == *s2)
		{
			continue;
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			write(1, "-1", 1);
		}
	}
	return (0);
}

int		main(void)
{
	char *a;
	char *b;

	a = "Hello"; 
	b = "Helloo";
	char my;
	my = ft_strcmp(a, b) + '0';
	write(1, &my, 1);

	return (0);
}
