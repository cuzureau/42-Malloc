#include "malloc.h"
#include <stdio.h>

void 				*malloc(size_t size)
{
	char		*str;

	printf("yooo");
	str = (char*)mmap(0, size, PROT_READ | PROT_WRITE, 
		MAP_ANON | MAP_PRIVATE, -1, 0);
	return(str);
}
