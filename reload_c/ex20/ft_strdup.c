#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int	i;

	i = ft_strlen(src);
	duplicate = malloc(sizeof(char) * i + 1);
	while (*src)
	{
		*duplicate = *src;
		duplicate++;
		src++;
	}
	*duplicate = 0;
	while (i > 0)
	{
		duplicate--;
		i--;
	}
	return (duplicate);
}

int	main(int ac, char **av)
{
	printf("%s", ft_strdup(av[0]));
	return (0);
}
