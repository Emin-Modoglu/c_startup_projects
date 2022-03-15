#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"");

    char ch;

    printf("***Lütfen Karne notunuzu giriniz*** \n");
    printf("Büyük Harfleri giriniz...\n");
    printf("--$-->");
    ch = getchar();

    switch (ch)
    {
        case 'A':
                printf("***Pek İyi***\n");
                printf("</>Very well\n</>");
                break;
        
        case 'B' :
                printf("***İyi***\n");
                printf("<>Good<>");
                break;

        case 'C':
                printf("***Orta***\n");
                printf("<>Middle<>");
                break;
        
        case 'D':
                printf("***Kötü***\n");
                printf("<>Bad<>");
                break;
        
        case 'E':
                printf("***Daha iyisini çalışırsan yapalirsin...\n");
                printf("You can do better\n");
                break;

        default: 
                printf("Yalnış bir değer girdiniz ...\n");
                break;
    }



 return(0);
}