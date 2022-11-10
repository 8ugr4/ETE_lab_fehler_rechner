#include <stdio.h>
#include <math.h>

int main(){

/* f= fehler %
*  ex= experiment wert
*  the= theoretical wert
*  x= operational wert
*  f= (ex-the)/ex;
*/
float f=0,ex=0,the=0,ans=0;
int x=0;
printf("----------------------------------------------------\n");
printf("Welcome to the Error Percentage Calculator v1.0-----\n");
printf("----------------------------------------------------\n");
printf("Choose which operation you would like to do---------\n");
printf("----------1-Mistake Percentage Calculator-----------\n");
printf("----------2-Voltage Gain Calculator-----------------\n");
printf("----------------------------------------------------\n");
printf("----------------------------------------------------\n");
printf("----------Press 9 to exit from the program.---------\n");
printf("----------------------------------------------------\n");
scanf("%d",&x);
while(x!=9){
        if(x==1){
     //mistake percentage calculator
    printf("theoretical value:\t");
    scanf("%f",&the);
    printf("\nexperimental value:\t");
    scanf("%f",&ex);
    f=(ex-the)/ex;
    printf("\nerror=\t %f\n\n",fabs(f));
    printf("----------------------------------------------------\n");

    //burda hata var, 2 yazýnca 2.programa gitmiyo düzelt sonra.
    //if-1 close
    the=0;
    ex=0;
    printf("---press 1 to continue to this program, 9 to exit---\n");
    printf("---press 2 to continue in Voltage Gain Calculator---\n");
    scanf("%d",&x);
    }else if(x==2){

        //voltage gain calculator
        //Av= 20 * log (V0/Vi)
        float V0,Vi=10;
        float result,res;
        printf("Vi=   %1.f\n",Vi);
        //scanf("%f",&Vi);
        printf("V0=   ");
        scanf("%f",&V0);
        result=20*log10(V0/Vi);
        printf("result= %.5f\n",result);
        printf("---press 1 to continue to this program, 9 to exit---\n");
        printf("---press 2 to continue in Voltage Gain Calculator---\n");
        scanf("%d",&x);
        }
      }
    return 0;
}

