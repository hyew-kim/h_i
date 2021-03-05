#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char* str)
{
	int		neg;
	int		num;

	neg = 1;
	num = 0;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num*10+(*str - '0');
		str++;
	}
	return(neg * num);
}
int main()
{
	char str[] = "\v\t--3";
	printf("%d\n",ft_atoi(str));
	printf("%d", atoi(str));
}	