#include <stdio.h>
#include <string.h>
char* ft_strstr(char* str, char* to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[i] == 0)
		return(str);
	while (str[i])  
	{//i는 str, j는 to_find
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == 0)
				return(&str[i]);
		}
		i++;
	}
	return(0);
}

int main()
{
	char str1[] = "lulu lala";
	char str2[] = "u l";
	printf("%s\n", ft_strstr(str1, str2));
	printf("%s", strstr(str1, str2));
	return 0;
}