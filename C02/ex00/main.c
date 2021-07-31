#include<stdio.h>
#include<unistd.h>
#include<string.h>

char    *ft_strcpy(char *dest, char *src);

int    main(void)
{
    char    destin[] = "July";
    char    source[] = "Marilia";
    char    *dest;

    printf("(Antes da funcao) antes src: %s | dest: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

    printf("(Depois da funcao) depois src: %s | dest: %s\n", source, dest);
    return(0);
}