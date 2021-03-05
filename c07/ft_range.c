#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len;
	int	i;

	len = max - min;
	if(len <= 0
			|| !(ptr = (int*)malloc(sizeof(int)*len)))
		return(NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

#include <stdio.h>
int main()
{
	int *ptr=ft_range(1, 3);
	for(int i=0;i<2;i++)
		printf("%d",ptr[i]);
	return(0);
}
