#include<stdio.h>
#include<unistd.h>

int ft_str_is_alpha(char *str);

int    main(void)
{
    char    destin[] = "ari2ane";

    printf("A string é: %s\n", destin);
    printf("A saída é: %d\n",ft_str_is_alpha(destin));
}
