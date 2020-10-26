#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main(void)
{
	ft_print_reverse_alphabet();
}

void ft_print_reverse_alphabet(void)
{
	for(char a='z'; a>='a'; a--)
	write(1, &a, 1);
}
