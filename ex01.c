#include <stdio.h>
#include <string.h>
int		ft_strncmp(char* s1, char* s2, unsigned int n)
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < n)
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
	char str1[100] = "abzdsgdgd";
	char str2[100] = "abgdgd";
	printf("%d\n", ft_strncmp(str1, str2,5));
	printf("%d\n", strncmp(str1, str2, 5));

	return 0;
}