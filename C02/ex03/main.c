#include<stdio.h>
#include<unistd.h>

int ft_str_is_numeric(char *str);

int    main(void)
{
    char    destin[] = "1f345";

    printf("A string é: %s\n", destin);
    printf("A saída é: %d\n", ft_str_is_numeric(destin));
}