#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	unsigned int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
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
//	printf("strncat : %s\n", strncat(a, b, c));
	printf("my : %s\n", ft_strncat(a, b, c));
	return (0);
}
