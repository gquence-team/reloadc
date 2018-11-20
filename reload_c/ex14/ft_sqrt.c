#include <stdio.h>

int	ft_sqrt(int nb)
{
	int res;

	res = 1;
	if (nb < 1)
		return (0);
	while ((res * res) != nb && (res <= nb / 2 && res < 46341))
		res++;
	if (res * res == nb)
		return (res);
	return (0);
}
