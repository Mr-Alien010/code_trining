#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(sizeof(int) * 5);
    free(arr);
    arr = (int *)malloc(sizeof(int) *23);
    system("leaks a.out");
}