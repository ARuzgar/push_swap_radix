#include "push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc <= 1)
		return (0);
	else
		ft_checks((argv + 1), (argc - 2));
	initialize_stack(argc, argv, &a, NULL);
	initialize_stack(0, NULL, &a, &b);
	if (check_if_sorted(a.arr, a.size) || a.size == 1)
		clean_stack(&a, &b);
	if (a.size <= 5)
		lil_sort(&a, &b);
	radix_sort(&a, &b);
	clean_stack(&a, &b);
}
