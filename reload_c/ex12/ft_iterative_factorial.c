int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
