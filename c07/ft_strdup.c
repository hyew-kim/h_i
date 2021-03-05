#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	len;
	char	*str;
	int	i;

	len = 0;
	while (*src)
	{
		len++;
		src++;
	}
	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
#include <stdio.h>

int main()
{
	char str1[10]="abcdef";
	char* str=ft_strdup(str1);
	printf("%s",str);
	return 0;
}
