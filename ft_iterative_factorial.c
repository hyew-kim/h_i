#include <stdio.h>
int		ft_iterative_factorial(int nb)
{
	int num;

	if (nb < 0)
		return(0);
	else if (nb <= 1)
		return(1);
	num = 1;
	while (nb > 1)
	{
		num *= nb;
		nb--;
	}
	return(num);
}
int main()
{
	printf("%d",ft_iterative_factorial(3));
	return 0;
}