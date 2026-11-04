#include<stdio.h>
int main(){
    int num;
    printf("숫자 입력 : ");
    scanf("%d",&num);
    
    int i;
    int a=0;
    printf("약수: ");
    for(i=0;i<=num;i++){
        if(12%i==0){
            printf("%d ",i);
            a++;
        }


    }
    printf("\n약수의 개수 : %d",a);
}