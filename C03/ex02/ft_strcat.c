#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *str)
{
	while (*dest)
	{
		write(1, dest, 1);
		dest++;
	}

	while (*str)
	{
		dest++;
		str++;
		write(1, dest, 1);
	}
	return (0);
}

int		main(void)
{

	char *a;
	char *b;
	//char c;

	a = "Hello";
	b = "World";

	//c = 
		ft_strcat(a, b);
	//write(1, &c, 1);
	return (0);
}
