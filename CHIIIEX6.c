#include <stdio.h>
int main(void) {
int a,b,m,n,r;
printf("Entrez une fraction : ");
scanf("%d/%d",&m,&n);
a=m;
b=n;
while(n!=0){
    r=m%n;
    m=n;
    n=r;
}
a/=m;
b/=m;
printf("Sous sa forme la plus simple : %d/%d",a,b);
return 0;
}
