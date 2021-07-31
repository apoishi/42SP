#include <string.h>
#include <stdio.h>
char *ft_strstr(char *str, char *to_find);

int main()
{
 char s1[] = "Ariane Padilha cadete!";
 char s2[] = " Padilha";
 printf("\n");
 printf("String completa: %s\n", s1);
 printf("String a ser achada: %s\n", s2);
 printf("Retorno da funcao padrao: %s\n", strstr(s1, s2));
 printf("Retorno da minha funcao: %s\n", ft_strstr(s1, s2));
 printf("\n");
 printf("\n");
}