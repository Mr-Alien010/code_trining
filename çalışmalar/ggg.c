#include <stdio.h>
#include <stdlib.h>


int *ekle(int sayi)
{
    int *ptr;
    int i = 0;
    ptr = (int *)malloc(sizeof(int) * sayi);

    while (i < sayi)
    {
        ptr[i] = (i * 5);
        i++;
    }
    return (ptr);
}




int main()
{
    int *tuta;
    int *tut;   
    int sayi;
    int i = 0;    
    scanf("%d", &sayi);

    tut = ekle(sayi);

    while(i < sayi)
    {
        printf("%d\n", tut[i]);
        i++;
    }
    tuta = tut;
    system("leaks a.out");

}

