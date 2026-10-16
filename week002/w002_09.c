#include <stdio.h>
int main(){
    int a;
    char b;
    int c;

    printf("식을 입력하세요 : ");
    scanf("%d ",&a);
    scanf("%c",&b);
    scanf("%d",&c);
    
    if(b == '+'){
        printf("= %d",a+c);
    }
    else if(b=='-'){
        printf("= %d",a-c);
    }
    else if(b=='*'){
        printf("= %d",a*c);
    }
    else if(b=="/"){
        printf("= %d", a/c);
    }

}