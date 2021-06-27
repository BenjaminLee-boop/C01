#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int arr[5] = {-2, 45, 0, 11, -9};
	ft_sort_int_tab(*arr, 5);
}
void ft_sort_int_tab(int *tab, int size)
{
	int j = 00;
	int i = 00;

	while(j < size-1)
	{
		while(i < size-j-1)
		{
			if(tab[i] > tab[i + 1])
			{
				int temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			++i;	
		}
		++j;
	}
	 for (int s = 0; s < 5; ++s) {
		printf("%i, ", s);
	 }
}
