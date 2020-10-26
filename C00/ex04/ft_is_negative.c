#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{	
	int n=1;
	ft_is_negative(n);
}

void ft_is_negative(int n)
{
	if(n<0)
	{
		char N = 'N';
		write(1,&N,1);
	}else
	{
		char P = 'P';
		write(1,&P,1);
	}
}
