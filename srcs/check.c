#include "../includes/push_swap.h"

int check_each(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
        {
            ft_printf("ERROR\nChar that is not a number\n");
            exit (1);
        }
        i++;
    }
    if(ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
        return (1);
    return (0);
    
}

int check_dup(int ac, char **av, int i)
{
    int j;

    j = 1;
    while(j < ac)
    {
        if(ft_atoi(av[i]) == ft_atoi(av[j]) && i != j)
        {
            ft_printf("ERROR\nDuplicate number\n");
            exit (1);
        }
        j++;
    }
    return (0);
}

void    check_args(int ac, char **av)
{
    int i;

    i = 1;
    if(ac == 1)
        exit(1);
    while(i != ac)
    {
        if(check_each(av[i]) || check_dup(ac, av, i))
        {
            ft_printf("ERROR\n");
            exit(1);
        }
        i++;
    }
}
