#include <stdio.h>
int main(){
    int a='a'-'A';
    char str[100];

    printf("문자열 입력 : ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++){
        str[i]=str[i]-a;
    }
    printf("변환 결과 : %s",str);
}