int		g_input[16];
extern int g_board[4][4];

int		make_row(int row, int input_idx, int i)
{
	if (input_idx < 4)
		return i;
	else if (input_idx < 8)
		return (3 - i);
	else
		return (row);
}

int		make_col(int col, int input_idx, int i)
{
	if (input_idx < 8)
		return (col);
	else if (input_idx < 12)
		return i;
	else
		return (3 - i);
}

int		is_valid_value_sub(int row, int col, int input_idx)
{
	int		i; 
	int		cnt;
	int		max_val;

	i = 0;
	cnt = 0;
	max_val = -1;
	while(i < 3)
	{
		row = make_row(row, input_idx, i);
		col = make_col(col, input_idx, i);
		if (g_board[row][col] == 0)
			return(1);
		if (max_val < g_board[row][col])
		{
			max_val = g_board[row][col];
			cnt++;
		}
		i++;
	}
	if (cnt == g_input[input_idx])
		return (1);
	return (0);
}

int		is_valid_value(int row, int col)
{
	int		i;
	int		input_idx;

	i = 0;
	while (i < 4)
	{
		if (i < 2)
			input_idx = i * 4 + col;
		else
			input_idx = i * 4 + row;
		if(!is_valid_value_sub(row,col,input_idx))
			return (0);
		i++;
	}
	return (1);
}
int		is_valid_input(char* input)
{
	int cnt;

	cnt = 0;
	while (*input)
	{
		while (*input && *input == ' ')
			input++;
		if (*input >= '1' && *input <= '4')
		{
			if (cnt >= 16 || (*(input + 1) && (*(input + 1) != ' ')))
				return (0);
			g_input[cnt++] = *input - '0';
		}
		else
			return (0);
		input++;
	}
	return (cnt == 16);
}