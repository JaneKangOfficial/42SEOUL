#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	char *a;
	char *b;

	a = "helloo"; 
	b = "Helloo";
	ft_strcmp(a, b);
	printf("strcmp: %d\n", strcmp(a, b));
	printf("my : %d\n", ft_strcmp(a, b));
	return (0);
}
