#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_params(char **av)
{
	av++;
	while (*av)
	{
		ft_putstr(*av);
		ft_putchar('\n');
		av++;
	}
}

int		main(int argc, char **argv)
{
	argc++;
	ft_print_params(argv);
	return (0);
}
