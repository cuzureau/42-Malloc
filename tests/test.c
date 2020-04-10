#include <stdlib.h>
#include <stdio.h>

// av[1] = character to map
// av[2] = number

int main(int ac, char **av)
{
	int 	i;
	char 	*addr;

	addr = (char*)malloc(atoi(av[2]));
	i = 0;
	while (i < atoi(av[2]))
	{
		addr[i] = av[1][0];
		i++;
	}
	printf("%s\n", addr);
	return (0);
}