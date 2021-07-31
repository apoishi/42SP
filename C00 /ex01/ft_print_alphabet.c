#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	 caractere;

	caractere = 'a';
	while (caractere <= 'z')
	{
		write(1, &caractere, 1);
		caractere = caractere + 1;
	}
}
