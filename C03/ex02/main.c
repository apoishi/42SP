#include<stdio.h>
#include<string.h>
char *ft_strcat(char *dest, char *src);
int main(void)
{
char string1A[7] = "Cad", string2A[7] = "eta";
char string1B[7] = "Cad", string2B[7] = "eto";
 strcat(string1A, string2A);
 printf("Retorno da funcao padrao: %s\n", string1A);
 ft_strcat(string1B, string2B);
 printf("Retorno da minha funcao: %s\n", string1B);
}