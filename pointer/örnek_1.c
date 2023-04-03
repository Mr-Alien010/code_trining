#include <stdio.h>
 
int main()
{
	int a[5] = { -1, 3, 2, -2, 0};
	int *p = a + 3;
	int i;
 
	a[p[*p]]++;
	a[p[*p]]++;
	
	for (i = 0; i < 5; ++i)
		printf("%d ", a[i]);
 
	return 0;
}