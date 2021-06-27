void	ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int * b)
{
	int mod;
	int div;
	int q;
	int w;

	q = *a;
	w = *b;
	mod = q % w;
	div = q / w;
	*a = div;
	*b = mod;
}
}
