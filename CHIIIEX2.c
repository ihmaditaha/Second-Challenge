#include<stdio.h>
int main(void){
int x,a,b;
printf("Entrez un nombre à deux chiffres : ");
scanf("%d",&x);
a=x/10;
b=x%10;
printf("Le nombre inversé est : %d%d",b,a);
return 0;
}
