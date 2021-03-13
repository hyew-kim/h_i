#include <stdlib.h>

int	issep(char *charset, char c)
{
	while (*charset)
	{
		if (c == *charset)
			return(1);
		charset++;
	}	
	return (0);
}

int	cal_len(char *str, char *charset)
{
	int	len;

	while(*str)
	{
		if (!(issep(charset, *str)))
			len++;
		str++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int	len;
	int	i;
	int	j;

	len = cal_len(str, charset);
	if (!(result = (char**)malloc(sizeof(char*) * (len + 1))))
		return(0);
	i = 0;
	j = 0;
	while (str[i] && j < len)
	{
		if (!(*result = (char*)malloc(

