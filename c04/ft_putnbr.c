#include <unistd.h>

void	_putc(char c)
{
	write(1,&c,1);
}
void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		_putc(nb + '0');
	else if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		_putc((nb % 10)+'0');
	}
	else
	{
		_putc('-');
		if(nb == -2147483648)
			write(1, "2147483648",10);
		else
			ft_putnbr(nb * -1);
	}
}

int main(void)
{
	int num = -215748648;
	ft_putnbr(num);
	return 0;
}


