#include<stdio.h>
#include<string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
char *string1 = "ari";
char *string2 = "aro";
int retornoPadrao;
int retornoMinhaFuncao;
retornoPadrao = strncmp(string1, string2, 3);
retornoMinhaFuncao = ft_strncmp(string1, string2, 3);
printf("Retorno da funcao padrao: %d\n", retornoPadrao);
printf("Retorno da minha funcao: %d\n", retornoMinhaFuncao);

}