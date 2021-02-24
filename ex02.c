#include <stdio.h>
char* ft_strcat(char* dest, char* src)
{
	//destÀÇ nullÃ£±â
	while(*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}
	return (dest);
}

int main()
{
	char str[10] = "abcd;] ";
	char str1[10] = "e";
	ft_strcat(str, str1);
	printf("%s",str);
	return 0;
}