#include <stdio.h>
int main(){
    int a;

    printf("나이를 입력하세요 : ");
    scanf("%d",&a);

    if(a>=20){
        printf("성인");
    }
    else if(a>=17){
        printf("고등학생");
    }
    else if(a>=14){
        printf("중학생");
    }
    else if(a>=8){
        printf("초등학생");
    }
    else {
        printf("미취학");
    }
}