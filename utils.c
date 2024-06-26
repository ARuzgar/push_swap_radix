#include "push_swap.h"

int	find_ind(int *a, int size, int value)
{
	int	i;

	if (!a || size < 1)
		return (-1);
	i = -1;
	while (++i < size)
	{
		if (a[i] == value)
			return (i);
	}
	return (-1);
}

int	count_digits(int a)
{
	int	res;

	res = 0;
	while (a != 0)
	{
		a /= 10;
		res++;
	}
	return (res);
}

int	abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

void	copy_arr_until(int *dst, int *src, int n)
{
	int		i;

	if (!dst || !src)
		return ;
	if (dst <= src)
	{
		i = -1;
		while (++i < n)
			dst[i] = src[i];
	}
	if (dst > src)
	{
		i = n;
		while (i-- > 0)
			dst[i] = src[i];
	}
}

int	check_if_sorted(int *a, int size)
{
	int	i;

	i = -1;
	while (++i < size - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
	}
	return (1);
}
