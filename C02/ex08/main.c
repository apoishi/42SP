#include<stdio.h>
#include<unistd.h>

char    *ft_strlowcase(char *str);

int    main(void)
{
    char    destin[] = "VInICIUS";

    printf("A string e: %s\n", destin);
    printf("A saída e: %s\n", ft_strlowcase(destin));
}
