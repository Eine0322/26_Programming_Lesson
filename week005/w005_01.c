#include <stdio.h>

int main(){
    char name[20];
    char a;

    printf("문자열 입력 : ");
    scanf("%s",name);
    printf("찾을 문자 : ");
    scanf(" %c",&a);

    int b=0;
    int i=0;
    while(i<=20){
        if(name[i]==a){
            b++;
        }
        i++;
    }
    printf("\n%c의 개수 : %d",a,b);

}