#include<stdio.h>
int main(void){
int x,a,b;
printf("Entrez un nombre � deux chiffres : ");
scanf("%d",&x);
a=x/10;
b=x%10;
printf("Le nombre invers� est : %d%d",b,a);
return 0;
}
