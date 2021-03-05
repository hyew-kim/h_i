#include <unistd.h>

void	_puts(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int args, char* argv[])
{
	int i;

	i = args - 1;
	while (i)
	{
		_puts(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
