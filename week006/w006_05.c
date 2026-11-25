#include <stdio.h>

int gcd(int a,int b){
 int r=a%b;

 if(r==0){
    return b;
 }

 return gcd(b,r);
}

int main(){
    int a;
    int b;

    printf("첫 번째 정수 : ");
    scanf("%d",&a);
    printf("두 번째 정수 : ");
    scanf("%d",&b);

    int result = gcd(a,b);
    printf("\n최대공약수 : %d",result);
}