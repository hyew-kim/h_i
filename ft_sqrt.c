int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return(0);
	i = 1;
	while (i * i < nb)
		i++;
	if ((nb / i) == i)
		return(i);
	else
		return(0);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(4));
}