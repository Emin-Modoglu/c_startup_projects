#include <stdio.h>
#include <locale.h>

int main(void)
{
     setlocale(LC_ALL,"");
     int ay ;

     printf("Kaçıncı Aydayız = ");
     scanf("%d",&ay);


     switch (ay)
     {
        case 1:
                printf("***OCAK***\n");
                printf("***JANURAY***\n");
                break;                              //Her case'in sonuna eklemezsek tüm case'leri  işler << 
        
        case 2:
                printf("***ŞUBAT***\n");
                printf("***FEBRUARY***\n");
                break;
        
        case 3:
                printf("***MART***\n");
                printf("***MARCH***\n");
                break;
        
        case 4:
                printf("***NİSAN***\n");
                printf("***APRİL***\n");
                break;

        case 5:
                printf("***MAYIS***\n");
                printf("***MAY***\n");
                break;
        
        case 6:
                printf("***HAZİRAN***\n");
                printf("***JUNE***\n");
                break;
        
        case 7:
                printf("**TEMMMUZ***\n");
                printf("***JULY***\n");
                break;
        
        case 8:
                printf("***AĞUSTOS***\n");
                printf("***AUGUST***\n");
                break;
        
        case 9:
                printf("***EYLÜL***\n");
                printf("***SEPTEMBER***\n");
                break;
        
        case 10:
                printf("***EKİM***\n");
                printf("***OCTOBER***\n");
                break;
        
        case 11:
                printf("***KASIM***\n");
                printf("***NOVEMBER***\n");
                break;
        
        case 12:
                printf("***ARALIK***\n");
                printf("***DECEMBER***\n");
                break;
        
        default:
                printf("1 ile 12 dahil arasında bir sayı giriniz...\n");
                break;
        

     }
     return(0);
}
