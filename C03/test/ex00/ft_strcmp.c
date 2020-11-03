#include <unistd.h>
#include <string.h>
#include <stdio.h>

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
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}

int		main(void)
{
	char *a;
	char *b;

	a = "Hello"; 
	b = "Hello";
	ft_strcmp(a, b);
	printf("strcmp: %d\n", strcmp(a, b));
	printf("my : %d\n", ft_strcmp(a, b));
	return (0);
}
