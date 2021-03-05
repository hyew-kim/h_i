#include <unistd.h>

void	_puts(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char* argv[])
{
	if (argc)
		_puts(argv[0]);
	write(1, "\n", 1);
	return (0);
}
