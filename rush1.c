#include <stdio.h>

int		g_board[4][5];
int		g_succeed;
int		is_valid_value(int row, int col);

void	f_putc(char c)
{
	//write(1, &c, 1);
	printf("%c",c);
}

void	print_board(void)
{
	int		row;
	int		col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			f_putc(g_board[row][col] + '0');
			if (col != 3)
				f_putc(' ');
			col++;
		}
		printf("\n");
		row ++;
	}
}
int		is_exist(int row, int col, int i)
{
	int idx;

	idx = 0;
	while (idx < 4)
	{
		if (g_board[row][idx] == i || g_board[idx][col] == i)
			return (0);
		idx++;
	}
	return (1);
}
void	make_board(int row, int col)
{
	int i;

	if (row == 4)
	{
		print_board();
		g_succeed = 1;
		return ;
	}
	i = 0;
	while (i < 4)
	{
		if (!is_exist(row, col, i))
			continue;
		g_board[row][col] = i;
		if (is_valid_value(row, col) && !g_succeed)
		{
			if (col == 3)
				make_board(row + 1, 1);
			else
				make_board(row, col + 1); 
		}
		g_board[row][col] = 0;
		i++;
	}
}

int		rush(void)
{
	int		i;
	int		j;

	g_succeed = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 5)
		{
			g_board[i][j] = 0;
			j++;
		}
		i++;
	}
	make_board(0, 0);
	return (g_succeed);
}