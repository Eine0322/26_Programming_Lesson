#include <stdio.h>
int main(){
    char str[100];
    char str2[100];
    char result[199];

    printf("첫 번째 문자열 : ");
    scanf("%s",str);
    printf("두 번째 문자열 : ");
    scanf("%s",str2);

    int a=0;
    for(int i=0;str[i]!='\0';i++){
        a++;
    }

    for(int i=0;str[i]!='\0';i++){
        result[i]=str[i];
    }
    for(int i=a;str2[i]!='\0';i++){
        result[i]=str2[i];
    }

    printf("\n결과 : %s",result);
}