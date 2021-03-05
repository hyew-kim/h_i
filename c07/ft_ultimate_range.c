#include <stdlib.h>


int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL; 
		return (0);
	}
	if(!(*range = (int*)malloc(sizeof(int) * len)))
		return (-1);
	i = 0;
	while (i < len)
	{
		*range[i] = min + i;
		i++;
	}
	return (i);
}
#include <stdio.h>
int main(void)
{
	int *str;
	int i=ft_ultimate_range(&str,1,4);
	for(int j=0; j<i;j++)
		printf("%d",str[j]);
}
