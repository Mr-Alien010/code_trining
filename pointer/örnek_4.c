//abc = a! + b! + c!

#include <stdio.h>

int fac(int n)
{
    int top = 1;
    while (0 < n)
    {
        top *= n;
        n--;
    }
    return (top);
}


int main()
{
    int abc = 1;
    int top = 0;
    int n = 0;
    while (abc <= 100000)
    {
        n = abc;
        while (n)
        {
            top += fac(n % 10);
            n /= 10;
        }
        if (abc == top)
            printf("%d\n", abc);
        abc++;
        top = 0;
    }
}
