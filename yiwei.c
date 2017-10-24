#include <stdio.h>
#include <stdlib.h>
int main()
{
	char k[25];
	int i;
	i=~(0x0f<<(4*2));
	itoa(i,k,2);
	printf("%08sB\n",k);
	return 0;
}
