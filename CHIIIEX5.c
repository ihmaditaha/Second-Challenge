#include <stdio.h>
int main(void) {
int m,n,r;
printf("Entrez deux entiers : ");
scanf("%d %d",&m,&n);
while(n!=0){
    r=m%n;
    m=n;
    n=r;
}
printf("Le plus grand commun diviseur est : %d",m);
return 0;
}
