#include<stdio.h>
#include<string.h>
int main(void){
char tele[50];

printf("Entrez un numéro de téléphone :");
scanf("%s",tele);
int length = strlen(tele);
for(int i=0;i<length;++i){
    switch (tele[i]){
        case 'A':case 'a':case 'B':case 'b':case 'C':case 'c':
            tele[i]='2';
            break;
        case 'D':case 'd':case 'E':case 'e':case 'F':case 'f':
            tele[i]='3';
            break;
        case 'G':case 'g':case 'H':case 'h':case 'I':case 'i':
            tele[i]='4';
            break;
        case 'J':case 'j':case 'K':case 'k':case 'L':case 'l':
            tele[i]='5';
            break;
        case 'M':case 'm':case 'N':case 'n':case 'O':case 'o':
            tele[i]='6';
            break;
        case 'P':case 'p':case 'R':case 'r':case 'S':case 's':
            tele[i]='7';
            break;
        case 'T':case 't':case 'U':case 'u':case 'V':case 'v':
            tele[i]='8';
            break;
        case 'W':case 'w':case 'X':case 'x':case 'Y':case 'y':
            tele[i]='9';
            break;
    }
}
printf("%s",tele);
return 0;
}
