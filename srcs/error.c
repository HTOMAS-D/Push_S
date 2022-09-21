#include "../includes/push_swap.h"

void	arg_error(int ac)
{
	ft_printf("\e[0;31mERROR\n");
	ft_printf("\e[0;31mWrong number of arguments(%d)\n", ac);
	exit(1);
}
