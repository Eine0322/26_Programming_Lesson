#include <stdio.h>
int main(){
    char name[99];
    
    printf("문자열 입력 : ");
    scanf("%s",name);
    
    int a=0;
    for(int i=0;name[i]!='\0';i++){
        a++;
    }

    printf("뒤집은 문자열 : ");
    for(int i=a-1;i>=0;i--){
        printf("%c",name[i]);
    }

}