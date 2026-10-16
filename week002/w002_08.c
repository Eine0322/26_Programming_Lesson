#include <stdio.h>
int main(){
    int a;

    printf("숫자를 입력하세요 : ");
    scanf("%d",&a);

    if(a>=10&&a<=20){
        printf("범위 안에 있습니다.");
    }
    else{
        printf("범위를 벗어났습니다.");
    }
}