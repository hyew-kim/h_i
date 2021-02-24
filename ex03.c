#include <stdio.h>
char*	ft_strncat(char* dest, char* src, unsigned int nb)
{
	unsigned int i;

	while (*dest)
	{
		dest++;
	}

	i = 1;
	while (i <= nb)
	{
		*dest++ = *src++;
		i++;
	}
	return (dest);
}

int main()
{
	char str[10] = "ab;  ";
	char str1[10] = "ehg";
	ft_strncat(str, str1,1);
	printf("%s", str);
	return 0;
}