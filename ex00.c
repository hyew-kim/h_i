#include <stdio.h>
#include <string.h>
int		strlen(char* str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				flag = 1;
			}
			else
			{
				flag = -1;
			}
			break;
		}
		i++;
	}
	return (flag);
}

int main()
{
	char str1[100] = "acd";
	char str2[100] = "acf";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d", strcmp(str1, str2));

	return 0;
}