#include <stdio.h>
#include <string.h>
unsigned int _strlen(char* str)
{
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	return(len);
}

unsigned int	ft_strlcat(char* dest, char* src, unsigned int size)
{
	unsigned int len_s;
	unsigned int len_d;
	unsigned int i;

	len_s = _strlen(src);
	len_d = _strlen(dest);
	if (!size)
		return(len_s);
	i = 0;
	while (len_d+i <size-1 && src[i])
	{
		dest[len_d+i] = src[i];
		i++;
	}
	dest[len_d+i] = 0;
	if (size > len_d)
		return(len_s + len_d);
	else
		return(len_s + size);
}

int main()
{
	char str1[20] = "oh my";
	char str2[] = " god";
	int len = ft_strlcat(str1, str2,8);
	//int len1 = strlcat(str1, str2, 5);
	for (int i = 0;i < len;i++)
		printf("%c", str1[i]);
}