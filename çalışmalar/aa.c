/*
1- başla
2- sayac = 0, sayi = 0
3- a = 0, i = 0
4- yaz "lutfen arac sayisini girin: " oku sayi
5- eğer sayi < 0
5.2- yaz "Program kapatildi"
5.2- bitir
6- ucretler[sayi]
7- "Araclarin otoparkta kac saat kalacaklarini belirtiniz"
8- "Ardindan enter a basin"
9- döngü
10- yaz "(%d. Aracin otoparkta kaldigi süre: ", (sayac + 1))
11- oku a
12- eğer a < 0 yaz "Yanlis bir sayi girdiniz."
12.1- ucretler[i] = 0
13- eğer a >= 0 && a < 1 ucretler[i] = 2
14- eğer a >= 1 && a < 3 ucretler[i] = 4 
15- eğer a >= 3 && a < 6 ucretler[i] = 8
16- eğer a >= 6 && a < 10 ucretler[i] = 15
17- eğer a <= 10 && a < 16 ucretler[i] = 20
18- eğer a <= 16 && a < 24 ucretler[i] = 30
19- değilde ucretler[i] = 50
20- i = i + 1, sayac = sayac + 1
21- döngüsonu (sayac != sayi)
22- i = 0, sayac = 0, toplam = 0
23- yaz "Araclarin sirali olarak otopark ucretleri"
24- döngü
25- eğer ucretler[i] == 0
25.1- yaz "%d. arac ERROR.... Hatali giris yaptin!!!\n", sayac\n", sayac , ucretler[i]
27- toplam += ucretler[i], sayac++, i++
28- döngüsonu(sayac <= sayi)
29- yaz "toplanan bakiye %d TL dir\n", toplam
30- bitir

*/

#include <stdio.h>

int main()
{
    int sayac = 0;
    int sayi = 0;
    int a = 0;
    int i = 0;
    printf("lutfen arac sayisini girin: "); // kaç araç için işlem yapacağımızı yazıyoruz
    scanf("%d", &sayi);
    if (sayi < 0)
    {
        printf("Program kapatildi\n");
        return (0);
    }
    int ucretler[sayi];


    // her bir araç için değer enter a basıyoruz
    printf("\nAraclarin otoparkta kac saat kalacaklarini belirtiniz\n\n");
    printf("Ardindan enter a basin\n\n");
    while (sayac != sayi)
    { 
        printf("%d. Aracin otoparkta kaldigi süre: ", (sayac + 1));
        scanf("%d", &a);
        if (a < 0)
        {
            printf("Yanlis bir sayi girdiniz.\n\n");
            ucretler[i] = 0;
        }
        else if(a >= 0 && a < 1)
            ucretler[i] = 2;
        else if (a >= 1 && a < 3)
            ucretler[i] = 4;
        else if (a >= 3 && a < 6)
            ucretler[i] = 8;
        else if (a >= 6 && a < 10)
            ucretler[i] = 15;
        else if (a >= 10 && a < 16)
            ucretler[i] = 20;
        else if (a >= 16 && a < 24)
            ucretler[i] = 30;
        else
            ucretler[i] = 50;
        i++;
        sayac++;
    }
    i = 0;
    sayac = 1;
    int toplam = 0;
    printf("\nAraclarin sirali olarak otopark ucretleri\n");
    while (sayac <= sayi)
    {

        if (ucretler[i] == 0)
        
            printf("%d. arac ERROR.... Hatali giris yaptin!!!\n", sayac);
        else
            printf("%d. aracn ucreti %d TL dir\n", sayac , ucretler[i]);
        
        toplam += ucretler[i];
        sayac++;
        i++;
    }
    printf("\ntoplanan bakiye %d TL dir\n", toplam);
}