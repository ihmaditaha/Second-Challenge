#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(void){
char mot[30];
int val=0;
printf("Entrez un mot :");
scanf("%s",mot);
int length = strlen(mot);
for(int i=0;i<length;i++){
    switch (tolower(mot[i])){
        case 'a':case 'e':case 'i':case 'l':case 'n':case 'o':case 'r':case 's':case 't':case 'u':
            val+=1;
            break;
        case 'd':case 'g':
            val+=2;
            break;
        case 'b':case 'c':case 'm':case 'p':
            val+=3;
            break;
        case 'f':case 'v':case 'w':case 'h':case 'y':
            val+=4;
            break;
        case 'k':
            val+=5;
            break;
        case 'j':case 'x':
            val+=8;
            break;
        case 'q':case 'z':
            val+=10;
            break;

    }
}
printf("Valeur Scrabble : %d",val);
return 0;
}
