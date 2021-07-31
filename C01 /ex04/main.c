#include<stdio.h>
void ft_ultimate_div_mod(int *a, int *b);
int main(void)
{
	int *a;
	int *b;
	int t1;
	int t2;
	
	t1 = 10;
	t2 = 5;
	a = &t1;
	b = &t2;
	ft_ultimate_div_mod(a,b);
	printf("%d %d", t1, t2);
}
