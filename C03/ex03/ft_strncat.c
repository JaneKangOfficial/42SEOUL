#include <unistd.h>

char	*ft_strncat(char *dest, char *str, unsigned int nb);

char	*ft_strncat(char *dest, char *str, unsigned int nb)
{
	unsigned int i;
	
	i = 0;
	while (*dest && i <= nb)
	{
		write (1, dest, 1);
		dest++;
		i++;
	}

	while (*str && i <= nb)
	{
		write(1, dest, 1);
		dest++;
		str++;
		i++;
	}
	return dest;
}

int		main(void)
{
	char *a;
	char *b;
	unsigned int c;
//	char d;

	a = "Hello";
	b = "World";
	c = 6;

//	d = 
	ft_strncat(a, b, c);
	//write(1, &d, 1);
	return (0);
}
