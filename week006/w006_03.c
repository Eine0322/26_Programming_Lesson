#include <stdio.h>

int countChar(char str[],char ch){
    int a=0;
    for(int i=0;str[i]!='\0';i++){
        a++;
    }

    int result=0;
    for(int i=0;i<=a;i++){
        if(str[i]==ch){ //여기가안되는것같아욥
            result++;
        }

        
    }

    
    return result;
}

int main(){

    char str[100];
    char ch;
    
    printf("문자열 입력 : ");
    scanf("%s",str);
    printf("찾을 문자 : ");
    scanf(" %c",&ch);

    int a = countChar(str,ch);

    printf("문자 %c의 개수 : %d",ch,a);

}