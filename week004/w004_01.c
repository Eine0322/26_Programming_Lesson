#include <stdio.h>
int main(){
    int n=1;
    int a;
    int sum=0;

    while(n<=5){
        printf("%d번째 숫자 : ",n);
        scanf("%d",&a);

        sum=sum+a;

        n++;
    }
    printf("\n합계 : %d\n",sum);
    float b=sum/5;
    printf("평균 : %.2f",b);

}