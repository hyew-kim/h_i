#include <unistd.h>

void	_puts(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1-*s2);
}
void	sort(int args, char* argv[])
{
	int	i;
	int	j;
	char 	*temp;

	i = 1;
	while (i < args-1)
	{
		j = i + 1;
		while (j < args)
		{
			if (_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
}
						


int	main(int args, char* argv[])
{
	int i;

	sort(args, argv);
	i = 1;
	while (i < args)
	{
		_puts(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
