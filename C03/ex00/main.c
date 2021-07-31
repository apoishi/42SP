#include<stdio.h>
#include<string.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
 char *string1 = "oii";
 char *string2 = "oi";
 int retornoPadrao;
 int retornoMinhaFuncao;
 retornoPadrao = strcmp(string1, string2);
 retornoMinhaFuncao = ft_strcmp(string1, string2);
 printf("Retorno da funcao padrao: %d\n", retornoPadrao);
 printf("Retorno da minha funcao: %d\n", retornoMinhaFuncao);
}