#include <unistd.h>

char *rev_print(*str)
{
	int r;
	r = 0;
	while (*str != '\0')
	{
		write(1, str++, 1);
		//r *= 10;
		//r += *str % 10;
		//*str /= 10;
		//r++;
	}
	return (str);
}

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
