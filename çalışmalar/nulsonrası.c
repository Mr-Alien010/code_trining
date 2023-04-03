 //Aşağıda bildirimi verilen remove_str isimli işlevin kodunu yazınız:

//char * remove_str(char *pstr, const char *pdel);

//remove_str işlevi birinci parametresine gönderilen adresteki yazının içinden ikinci parametresine 
//  adresi geçilen yazıyı (varsa) silecek.

#include <stdio.h>

int     remove_str(char *str , const char *del)
{
    int a = 0;
    int top = 0;
    int i = 0;
    int j = 0;

    while (str[i])
    {
        while  (str[i] == del[j])
        {
            i++;
            j++;
            if (del[j] == '\0')
            {
                top += (i - j - a);
                a = i;
                break;
            }
        }
        i++;
        j = 0;
    }
    top += (i - a);
    return (top);
}

int main()
{
    char *a = "ben yarin okula yarin dun";
    char *b = "yarin";
    printf("%d", remove_str(a, b));
}