#include <unistd.h>

void ft_print_combn(int n);

int main(void)
{
	ft_print_combn(3);
	return 0;
}

void ft_print_combn(int n)
{
	char arr[9];
	int a;

	a = 0;
	if ((0 < n) && ( n < 10))
	{
		arr[n-1];

		while (a < n)
		{
			arr[a] = a;
			write(1, arr, 1);
			a++;
		}

	}
}
