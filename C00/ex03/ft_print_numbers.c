#include <unistd.h>

void ft_print_numbers(void);

int main(void)
{
	ft_print_numbers();
	return 0;
}

void ft_print_numbers(void)
{
	for(int i='0'; i<='9'; i++)
	{	
		char c = (char)(i);
		write(1, &c, 1);
	}
}
