#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
	}
	*dest = '\0';
	return (temp);
}

int		main(void)
{
	char dest[20] = "Hello";
	char src[] = "World";

	printf("strcat : %s\n", strcat(dest, src));
	printf("my : %s\n", ft_strcat(dest, src));
	return (0);
}