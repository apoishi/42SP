#include<stdio.h>
#include<string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int main(void)
{
 char string1C[30] = "Seremos";
 char string2C[30] = " cadetes.";
 char string1[30] = "Seremos";
 char string2[30] = " cadetes.";
 strncat(string1C, string2C, 5);
 printf("Retorno da funcao padrao: %s\n", string1C);
 ft_strncat(string1, string2, 5);
 printf("Retorno da minha funcao: %s\n", string1);
}