int 	ft_strlen(char *str);

int ft_strlen(char *str)
{
	char ch;

	ch = *str;
	int counter;
	counter = 0;
	while(ch != '\0')
	{
		ch = *++str;
		counter++;
	}
	printf("%i", counter);
	return (counter);
}
