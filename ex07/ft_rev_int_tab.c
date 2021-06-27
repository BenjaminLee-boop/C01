void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int arrOne[size];
	int *arrTwo;
	int counter;
	int i;

	i = size;
	counter = 0;
	arrTwo = tab;
	
	while (i > 0 -1)
	{
		arrOne[i] = arrTwo[counter - 1];
		i--;
		counter++;
	}
	*tab = *arrOne;
	 }
