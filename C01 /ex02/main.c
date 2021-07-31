#include<stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
	int	*a;
	int	*b;
	int c;
	int d;
	
	a = &c;
	b = &d;
	c = 1;
	d = 2;
	ft_swap(a,b);
	printf("%d %d",c,d);
}
