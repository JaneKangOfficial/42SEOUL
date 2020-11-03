#include <stdio.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
			unsigned int i;
			i = 0;
			
			while((i < n) && (src[i] != '\0'))
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
	char a[] = "ABCDE";
	char b[] = "Hello";
	unsigned int c = 3;

	ft_strncpy(a, b, c);
	printf("%s", a);
	return (0);
}
