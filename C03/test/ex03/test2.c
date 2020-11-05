#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	char *temp;

	temp = dest;
	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		dest = src;
		src++;
		i++;
	}
	*src = '\0';
	return (temp);
}

int		main(void)
{
	//char *a;
	//char *b;
	//unsigned int c;

	char a[20] = "Hello";
	char b[] = "World";
	unsigned int c = 5;

	ft_strncat(a, b, c);
	printf("strncat : %s\n", strncat(a, b, c));
	printf("my : %s\n", ft_strncat(a, b, c));
	return (0);
}
