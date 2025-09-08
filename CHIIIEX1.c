#include<stdio.h>
int main(void){
int gs1, idg, ce, na, cc;
printf("Entrez l'ISBN (XXX-XXX-XXX-XXX-XXX) : ");
scanf("%d-%d-%d-%d-%d", &gs1,&idg,&ce,&na,&cc);
printf("Préfixe GS1 : %d\n",gs1);
printf("Identifiant de groupe : %d\n",idg);
printf("Code de l'éditeur : %d\n",ce);
printf("Numéro d'article : %d\n",na);
printf("Chiffre de contrôle : %d\n",cc);
return 0;
}
