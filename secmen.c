#include <locale.h>
#include <stdio.h>

int main(void) // fonksiyon tamınlarken  veri_tipi isim (parametesi)
{
    setlocale(LC_ALL,"");
    int yas;

    printf("Lütfen Yaşınızı Giriniz : ");
    scanf("%d",&yas);

    if (yas >= 18)
     {
        printf("Siz bir seçmensiniz...\n");
     }
    else
     printf("Siz bir seçmen değilsiniz...\n");

return(0);
}