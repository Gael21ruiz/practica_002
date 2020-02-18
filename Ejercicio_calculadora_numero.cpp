#include<stdio.h>
#include<stdlib.h>

int main(){
float a,b,c;
int opt;
printf(" 1.- Suma\n 2.- Resta\n 3.- Multiplicacion\n 4.- Division\n");
printf("Introduce una opcion: ");
scanf("%d",&opt);
printf("Introduce el primer operando: ");
scanf("%f",&a);
printf("Introduce el segundo operando: ");
scanf("%f",&b);
switch(opt){
case 1:
    c=a+b;
    break;
case 2:
    c=a-b;
    break;
case 3:
    c=a*b;
    break;
case 4:
    while(b==0){
        printf("Error, el segundo operando no puede ser 0\n");
        printf("Introduce el segundo operando: ");
        scanf("%f",&b);
    }
c=a/b;
    break;
default:
    printf("Error, opcion invalida\n");
    opt==-1;
}
if(opt!=-1){
    printf("El resultado es: %0.2f",c);

}
}
