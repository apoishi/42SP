#include<stdio.h>
#include<unistd.h>

int ft_str_is_printable(char *str);

int    main(void)
{
    char    *destin = "aasd©34a";

    printf("A string e: %s\n", destin);
    printf("A saída e: %d\n", ft_str_is_printable(destin));
}