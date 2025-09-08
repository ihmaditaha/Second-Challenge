#include<stdio.h>
#include <stdlib.h>
int main(void){
int h,m,smallest,tm,index;
printf("Entrez une heure (24h) : ");
scanf("%d:%d",&h,&m);
tm=h*60+m;
int hd[]={480,583,679,767,840,945,1140,1305};
int ha[]={616,512,811,900,968,1075,1280,1438};
smallest=1440;
for (int i=0;i<8;i++){
    if(abs(tm-hd[i])<smallest){
        smallest=abs(tm-hd[i]);
        index=i;
    }
}
printf("L'heure de départ la plus proche est %02d:%02d arrivant à %02d:%02d ",hd[index]/60,hd[index]%60,ha[index]/60,ha[index]%60);
return 0;
}
