#include <unistd.h>

char *rev_print(*str);

int main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print(" ");
	write(1, "\n", 1);
	return (0);
}

char *rev_print(char *str)
{
	if (str != 0)
	{
		write(1, str, 1);
		str++;
		rev_print(str);
	}
	return(str);
}
