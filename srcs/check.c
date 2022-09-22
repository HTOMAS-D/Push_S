#include "../includes/push_swap.h"

int check_each(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
        {
            ft_printf("ERROR\nThere is a letter somewhere\n");
            exit(1);
        }
    }
    if(ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
        return (1);
    return (0);
    
}

int check_dup(char **av)
{
    int i;
    int j;

    i = 1;
    while(av[i])
    {
        j = 1;
        while(av[j])
        { 
            if(i != j && ft_atoi(av[i]) == ft_atoi(av[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void    check_args(int ac, char **av)
{
    int i;

    i = 1;
    while(i != ac)
        {
            if(check_each(av[i]))
            { 
                ft_printf("ERROR\nNumber out of bounds(INT_MIN-INT_MAX)");
                exit(1);
            }
        }
    if(check_dup(av))
        {
            ft_printf("ERR0R\nSame value appears twice");
            exit(2);
        }
}
