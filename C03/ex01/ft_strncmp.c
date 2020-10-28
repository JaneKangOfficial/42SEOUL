#include <unistd.h>
#include <string.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n - 1) && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *a;
	char *b;
	unsigned int c;
	char d;

	a = "Hello";
	b = "Hell";
	c = 6;
	d = ft_strncmp(a, b, c) + '0';
	write(1, &d, 1);
	return (0);

}
