#include <stdio.h>
#include <stdlib.h>

int is_asal(int num)
{
    int i = 3;

    if (num == 2)
        return 2;
    if(num < 2 || num % 2 == 0)
        return 0;
    while(i < num)
    {
        if(num % i == 0)
            return 0;
        i += 2;
    }
    return num;
}

int counter_asal(int num)
{
    int i = 3;

    if(num < 2 || num % 2 == 0)
        return 0;
    while(i < num)
    {
        if(num % i == 0)
            return 0;
        i += 2;
    }
    return num;
}

int main(int ac, char **av)
{
    int i = 0;
    int counter = 1;
    int num = atoi(av[1]);

    while(i < num)
    {
        if(is_asal(num))
            counter++;
        num--;
    }
    num = atoi(av[1]);

    if(counter_asal(counter - 1))
        printf("%d Super Asal\n", num);
    else
        printf("%d Super asal DEGIL\n", num);
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