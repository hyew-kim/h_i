#include <stdio.h>
#include <math.h>

int		 ft_iterative_power(int nb, int power)
{
	int num;

	if (power < 0)
		return(0);
	else
	{
		if (power == 0)
			return(1);
		num = 1;
		while (power > 0)
		{
			num *= nb;
			power--;
		}
		return(num);
	}
}
int main()
{
	printf("%lf\n", pow(-1,4));
	printf("%d", ft_iterative_power(2, 10));
}