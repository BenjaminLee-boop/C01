#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main (void)
{
	char *hi;
	hi = "Hello, World is this working";
	
	ft_putstr(hi);
}
void ft_putstr(char *str)
{
	char ch;
	
	ch = *str;
	
	while(ch != '\0')
	{
		write(1, &ch, 1);
		ch = *str++;
	}
}
