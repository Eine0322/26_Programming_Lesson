#include <stdio.h> 
int main() {
    int a ;
    int b ;
    printf("첫 번째 숫자 : ") ;
    scanf("%d", &a) ;
    printf("두 번째 숫자 : ") ;
    scanf("%d", &b) ;

    printf("\n덧셈 : %d\n",a+b) ;
    printf("뺄셈 : %d\n", a-b) ;
    printf("곱셈 : %d\n", a*b) ;
    printf("나눗셈 : %.2f\n", (float)a/b) ;
    printf("나머지 : %d", a%b);
}