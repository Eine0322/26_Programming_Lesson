#include <stdio.h>
int main(){
    char name[99];
    char name2[99];

    printf("첫 번째 문자열 : ");
    scanf("%s",name);
    printf("두 번째 문자열 : ");
    scanf("%s",name2);

    int i=0;
    while(i<=98){
       if(name[i]!=name2[i]){
        printf("다른 문자열입니다.");
        return 0;
       }
       if(name[i]=='\0'){
        break;
       }
       i++;
    }
    printf("같은 문자열입니다.");

}