#include <stdio.h>
int digitSum(int n){
    int result;

        result=n%10;

        if(n<10){
            return result;
        }
    
    return result+digitSum(n/10);
}

int main(){
    int num;

    printf("정수 입력 : ");
    scanf("%d",&num);

    int result = digitSum(num);
    printf("자릿수의 합 : %d",result);
}