#include<stdio.h>
#include<unistd.h>

int ft_str_is_uppercase(char *str);

int    main(void)
{
    char    destin[] = "AAA";

    printf("A string é: %s\n", destin);
    printf("A saida é: %d\n", ft_str_is_uppercase(destin));
}