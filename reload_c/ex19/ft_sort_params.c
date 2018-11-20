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

void	ft_swap(char **s1, char **s2)
{
	char *buf;

	buf = *s1;
	*s1 = *s2;
	*s2 = buf;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1)
		return (*s1);
	return (-*s2);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = ac - 1;
		while (j > i)
		{
			if(ft_strcmp(av[j - 1], av[j]) > 0)
				ft_swap(&av[j - 1], &av[j]);
			j--;
		}	
		i++;
	}
	av++;
	while (*av)
	{
		ft_putstr(*av);
		ft_putchar('\n');
		av++;
	}
	return (0);
}
