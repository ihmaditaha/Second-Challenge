#include<stdio.h>
int main(void){
int gs1, idg, ce, na, cc;
printf("Entrez l'ISBN (XXX-XXX-XXX-XXX-XXX) : ");
scanf("%d-%d-%d-%d-%d", &gs1,&idg,&ce,&na,&cc);
printf("Pr�fixe GS1 : %d\n",gs1);
printf("Identifiant de groupe : %d\n",idg);
printf("Code de l'�diteur : %d\n",ce);
printf("Num�ro d'article : %d\n",na);
printf("Chiffre de contr�le : %d\n",cc);
return 0;
}
