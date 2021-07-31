#include<stdio.h>
#include<unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int    main(void)
{
    char    destin[] = "ariane";
    char    source[] = "klevlo";
    char    *dest;
    unsigned int n;

    n = 3;
    printf("(Antes da funcao) antes src: %s | dest: %s\n", source, destin);

    dest = ft_strncpy(destin, source, n);

    printf("(Depois da funcao) depois src: %s | dest: %s\n", source, dest);
    return(0);
}