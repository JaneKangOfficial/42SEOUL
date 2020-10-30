#include <unistd.h>

char	aff_z(char *c)
{
	int i;
	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] != 'z' || i < 0)
		{
			write(1, "z", 1);
			write(1, "\n", 1);
			break;
		}
		i++;
	}
	return (*c);
}

int		main(void)
{
	char *b = "abcdezg";
	aff_z(b);
	return (0);
}
