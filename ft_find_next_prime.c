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
	{//���� prime 0�� ���� 1�� ����(�Ҽ�)�� �ɶ����� �ݺ���Ų��!!
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