#include <stdio.h>
 
int main()
{
	int ival = 3;
	printf("%d", (ival++) + (++ival));
 
	return 0;
}