#include <stdio.h>
int main(){
    int n;
    printf("숫자 입력 : ");
    scanf("%d",&n);

    int a=0;

    printf("조건을 만족하는 숫자 : ");
    for(int i=1;i<=n;i++){

        if(i%4==0){
            printf("%d ",i);
            a++;
        }
        else if(i%6==0){
            printf("%d ",i);
            a++;
        }
    }

    printf("\n개수 : %d",a);

}