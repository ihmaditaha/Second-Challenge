#include <stdio.h>
int main(void) {
int m,i;
printf("Entrez un entier : ");
scanf("%d",&m);
for(i=2;i*i<=m;i+=2){
    printf("%d\n",i*i);
}
return 0;
}
