#include <stdio.h>

int my_strlen(char str[]){

    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    return len;
}

int main(){
    char result[100];
    printf("문자열 입력 : ");
    scanf("%s",result);

    int len=0;
    len= my_strlen(result);

    printf("문자열 길이 : %d",len);

}
