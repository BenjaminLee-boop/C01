void	ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod)
{
	float result;
	float m;

	m = a % b;
	result = a / b;
	*div = result;
	*mod = m;

	printf("A = %i \nB = %i\nResult : %f \n[*div] : %i\n[*mod] : %i\n",a, b, result,*div, *mod);
}
