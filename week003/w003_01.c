#include <stdio.h>
int main(){
    int a;

    printf("나이 입력 : ");
    scanf("%d",&a);

    if(a>=19){
        printf("입장료 : 12,000원");
    }
    else if(a>=13){
        printf("입장료 : 8,000원");
    }
    else if(a>=0){
        printf("입장료 : 5,000원");
    }
    else{
        printf("잘못된 나이입니다.");
    }
}