#include <stdio.h>
int main(){
    printf("1. 아메리카노\n2. 카페라떼\n3. 녹차\n");
   
    int menu;
    printf("메뉴를 선택해주세요 : ");
    scanf("%d",&menu);

switch(menu){
    case 1:
        printf("\n아메리카노를 선택했습니다.");
        break;          
    case 2:
        printf("\n카페라떼를 선택했습니다.");   
        break;
    case 3:
        printf("\n녹차를 선택했습니다.");
        break;
    default:
        printf("\n없는 메뉴입니다."); 
}
}