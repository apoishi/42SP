#include <stdio.h>

int ft_strlen(char *str);

int    main(void)
{
    char *str = "Hello";

    printf("The name %s has length of: %d\n", str, ft_strlen(str));
    return (0);
}