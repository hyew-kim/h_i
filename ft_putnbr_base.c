#include <stdio.h>

int		basecheck(char* base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || sizeof(base) == 1 ||
			base[i] == '+' || base[i] == '-')
			return(0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j]&&(i!=j))
				return(0);
			j++;
		}
		i++;
	}
	return(i);
}
void _putc(char c)
{
	printf("%c", c);
}
void	ft_nbr_base(int nbr, char* base)
{
	int n;

	n = basecheck(base);
	if (!n)
		return ;
	if (nbr >= 0 && nbr < n)
	{
		_putc(base[nbr % n]);
	}
	else if (nbr >= n)
	{
		ft_nbr_base(nbr / n,base);
		_putc(base[nbr % n]);
	}
	else
	{
		/*if (nbr == -2147483648)
		{
			_putc('-');
			_putc(base[2]);
			ft_nbr_base(147483648,base);
		}*/
		
		
		_putc('-');
		ft_nbr_base(nbr * -1,base);
		
	}
}
int main()
{
	int nbr = 123;
	char base[] = "0123456789abcdef";
	ft_nbr_base(nbr,base);
	printf("\n");
	printf("%x", nbr);
	return 0;
}
