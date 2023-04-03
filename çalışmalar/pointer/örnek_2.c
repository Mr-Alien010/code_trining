#include <stdio.h>
 
int main()
{
	int a[4] = { 2, 0, 3, 1};
	int i;
 
	++2[a][a][a][a];
 
	for (i = 0; i < 4; ++i)
		printf("%d ", a[i]);
	
	return 0;
}
a[3] === 3[a]  
*(&((&((&(a[2]))[0]))[3])[1])