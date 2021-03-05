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
			if (base[i] == base[j] && (i != j))
				return(0);
			j++;
		}
		i++;
	}
	return(i);
}
int		ft_atoi_base(char* str,char *base)
{
	int		neg;
	int		num;
	int		n;

	neg = 1;
	num = 0;
	n = basecheck(base);
	if (!base)
		return(0);
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
		num = num * 10 + (*str - '0');
		str++;
	}
	return(neg * num);
}
int main()
{
	char str[] = "\v\t--3";
	//printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}