#include <stdio.h>
int main(){
    int a;
    int b;

    printf("첫 번째 숫자 : ");
    scanf("%d",&a);
    printf("두 번째 숫자 : ");
    scanf("%d",&b);

    if(a==b){
        printf("두 수가 같습니다.");
    }
    
    else if(a>b){
        printf("%d",a);
    }
    else {
        printf("%d",b);
    }
}