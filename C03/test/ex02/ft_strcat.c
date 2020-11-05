#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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
	char dest[20] = "Hello";
	char src[] = "World";

	printf("strcat : %s\n", strcat(dest, src));
	printf("my : %s\n", ft_strcat(dest, src));
	return (0);
}
