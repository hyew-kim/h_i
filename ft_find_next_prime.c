int checkprime(int nb)
{
	int i;
	int prime;

	i = 2;
	prime = 1;
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			prime = 0;
			break;
		}
		i++;
	}
	return(prime);
}
int		ft_find_next_prime(int nb)
{
	int prime;

	if (nb <= 1)
		return(2);
	prime = checkprime(nb);
	if (prime)
		return(nb);
	else
	{//현재 prime 0인 상태 1인 상태(소수)가 될때까지 반복시킨다!!
		while (!prime)
		{
			nb++;
			prime = checkprime(nb);
		}
		return(nb);
	}
}
#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(-1));
}