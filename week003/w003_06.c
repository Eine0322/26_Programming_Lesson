#include <stdio.h>
int main(){
    int a;

    printf("숫자 입력 : ");
    scanf("%d",&a);
    
    int n=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            n++;
        }
    }
    if(n==0){
        printf("%d는 소수입니다.",a);
    }
    else{
        printf("%d는 소수가 아닙니다.",a);
    }
    
}