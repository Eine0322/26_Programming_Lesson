#include <stdio.h>
int main(){
    int num;

    printf("숫자를 입력하세요 : ");
    scanf("%d",&num);

    if(num%3==0&&num%5==0){
        printf("%d는 3과 5의 배수입니다.",num);
    }
    else if(num%3==0){
        printf("%d는 3의 배수입니다.",num);
    }
    else if(num%5==0){
        printf("%d는 5의 배수입니다.",num);
    }
}