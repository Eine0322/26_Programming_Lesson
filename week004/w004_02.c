#include <stdio.h>
int main(){
    int n=2;
    int a;
    
    printf("1번째 숫자 : ");
    scanf("%d",&a);
    int max=a;
    int min=a;

    while(n<=5){
        printf("%d번째 숫자 : ",n);
        scanf("%d",&a);

        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
        n++;
    }

    printf("\n최댓값 : %d\n최솟값 : %d",max,min);
}
    