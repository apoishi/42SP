#include<stdio.h>
#include<unistd.h>

char    *ft_strupcase(char *str);

int    main(void)
{
    char    destin[] = "arIane";

    printf("A string e: %s\n", destin);
    printf("A saída e: %s\n", ft_strupcase(destin));
}
