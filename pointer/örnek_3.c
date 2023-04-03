#include <stdio.h>

int main()
{

    char *a = "burak";
    int  b[4] = {4, 4, 1, 2};

    int *t = &b[1];
    int c = 0;

   // t++;
    //(*t)++;
   // c = *t;

    c = (*(t++))++;


    int i = 0;
    printf("%c",a[c]);
    while (i < 4)
    {
        printf("%d", b[i]);
        i++;
    }
}