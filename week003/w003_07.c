#include <stdio.h>
int main(){
    int n;
    printf("숫자 입력 : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
              printf("%d",j);
        }
        for(int j=i-1;j>=1;j--){
           printf("%d",j);
        }
        printf("\n");
       

    }

}