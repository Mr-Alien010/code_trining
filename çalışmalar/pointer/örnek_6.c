#include <stdio.h>
 
int main()
{
	char *a[] = { "necati", "kagan", "oguz", "gurbuz" };
	char **ptr[] = { a + 3, a + 2, a + 1, a }, ***p;
	p = ptr;
	++p;
	printf("%s", **p + 1);
 
	return 0;
}