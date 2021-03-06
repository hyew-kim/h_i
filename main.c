#include <stdio.h>

int rush(void);
int is_valid_input(char* c);

int main(int argc, char* argv[])
{
	if (argc != 2 || !is_valid_input(argv[1]) || !rush())
		printf("Error\n");
	return (0);
}