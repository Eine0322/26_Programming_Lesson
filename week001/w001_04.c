#include <stdio.h>
int main(){
    int a;
    int b=60;
    printf("초 입력 : ");
    scanf("%d",&a);
   
    printf("%d분 ",a/b);
    printf("%d초",a%b);
}