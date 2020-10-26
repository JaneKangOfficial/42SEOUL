#include <unistd.h>

void ft_print_alphabet(void);

int main(void)
{
	ft_print_alphabet();
}

void ft_print_alphabet(void)
{
	for(char a='a'; a<='z'; a++)
	write(1, &a, 1);
}
