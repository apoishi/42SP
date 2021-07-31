#include<stdio.h>
#include<unistd.h>

int ft_str_is_lowercase(char *str);

int    main(void)
{
    char    destin[] = "abcasadasd";

    printf("A string é: %s\n", destin);
    printf("A saída é: %d\n", ft_str_is_lowercase(destin));
}
