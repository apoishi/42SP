#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	caractere;

	caractere = 'z';
	while (caractere >= 'a')
	{
		write (1, &caractere, 1);
		caractere = caractere - 1;
	}
}
