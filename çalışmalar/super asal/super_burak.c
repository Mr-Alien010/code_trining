#include <stdio.h>

int     asal_mi(int n)
{
    int i = 2;

    if (n < 2)
        return (-1);
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}


int     super_asal(int n)
{
    if (n < 2)
        return (-1);
    int i = 0;
    int a = n;
    if (asal_mi(n))
    {
        while (a > 1)
        {
            if (asal_mi(a) == 1)
                i++;
            a--;
        }
    }
    if (asal_mi(i) == 1)
        return (n);
    else
        return (0);
}


int main()
{
    printf("%d", super_asal(13));
}



/*
1. asal sayı 2
2. asal sayı 3
3. asal sayı 5
4. asal sayı 7
5. asal sayı 11
6. asal sayı 13
7. asal sayı 17
*/