#include <stdio.h>
int main(){
    int num[10];
    int i=0;
    int a;

    while(i<10){
        printf("숫자 입력 (0 입력 시 종료) : ");
        scanf("%d",&a);

        if(a==0){
            break;
        }

        num[i]=a;
        i++;
    }
    printf("\n저장된 숫자 개수 : %d",i);

    i=i-1;
    printf("\n역순 출력 : ");
    while(i>=0){
        if(num[i]!=0){
            printf("%d ",num[i]);
        }
        i--;
    }
    
}