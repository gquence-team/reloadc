#include <stdio.h>
#include <string.h>

void	ft_swap(char **s1, char **s2)
{
	char *buf;

	buf = *s1;
	*s1 = *s2;
	*s2 = buf;
}

int	main(int ac, char **av)
{
	printf("%s %s %d\n", av[1], av[2], strcmp(av[1], av[2]));
	ft_swap(&av[1], &av[2]);
	printf("%s %s %d\n", av[1], av[2], strcmp(av[1], av[2]));
	return (0);
}
