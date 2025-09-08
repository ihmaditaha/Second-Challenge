#include <stdio.h>
int main(void) {
int n,d,r,i;
printf("Entrez une note numérique : ");
scanf("%d",&n);
d=n/10;
switch(d){
    case 10: case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    case 5:
        printf("E");
        break;
    default:
        printf("F");
}
return 0;
}
