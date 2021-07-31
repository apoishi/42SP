```c
#include<stdio.h>

void ft_ft(int*nbr);

int main(void)
{
	int i;
	int *b;

	i=10;
	b=&i;
	printf("Antes da funcao: %d\n",i);
	ft_ft(b);
	printf("Depois da funcao:%d\n",i);
}
```