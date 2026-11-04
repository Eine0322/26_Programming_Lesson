#include <stdio.h>
int main(){
    int num;
    printf("숫자 입력 : ");
    scanf("%d",&num);

    int a;
    a=num%10;

    int c;
    c=num/100;

    int b;
    b=(num-a-(100*c))/10;

    printf("뒤집은 숫자 : %d%d%d",a,b,c);
}