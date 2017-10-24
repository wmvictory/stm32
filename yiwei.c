#include <stdio.h>
#include <stdlib.h>
int main()
{
	char k[9];
	int i;
	i=0x0F;
	itoa(i,k,2);
	printf("%08s",k);
	return 0;
}

