#include<stdio.h>
int main(void){
int j1,m1,y1,j2,m2,y2;
printf("Entrez la premi�re date (mm/jj/aa) : \n");
scanf("%d/%d/%d",&m1,&j1,&y1);
printf("Entrez la deuxi�me date (mm/jj/aa) : :\n");
scanf("%d/%d/%d",&m2,&j2,&y2);
if(y1<y2){
    printf("%d/%d/%d est plus t�t que %d/%d/%d",m1,j1,y1,m2,j2,y2);
}else if(y1>y2){
    printf("%d/%d/%d est plus t�t que %d/%d/%d",m2,j2,y2,m1,j1,y1);
}else if (y1==y2){
    if(m1<m2){
        printf("%d/%d/%d est plus t�t que %d/%d/%d",m1,j1,y1,m2,j2,y2);
    }else if(m1>m2){
        printf("%d/%d/%d est plus t�t que %d/%d/%d",m2,j2,y2,m1,j1,y1);
    }else if (m1==m2){
        if(j1<j2){
            printf("%d/%d/%d est plus t�t que %d/%d/%d",m1,j1,y1,m2,j2,y2);
        }else if(j1>j2){
            printf("%d/%d/%d est plus t�t que %d/%d/%d",m2,j2,y2,m1,j1,y1);
        }
    }
}
return 0;
}
