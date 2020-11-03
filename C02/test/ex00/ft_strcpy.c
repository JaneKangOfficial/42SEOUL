#include <stdio.h>

char		*ft_strcpy(char *dest, char *src)
{

	int i;
	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i++;
	return dest;
}

int			main(void)
{
	char a[] = "abcde";
	char b[] = "Hello";

	ft_strcpy(a, b);
	printf("%s", a);
	return (0);
}
