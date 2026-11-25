#include <stdio.h>

int my_strcmp(char str1[],char str2[]){
    int a=0;

    for(int i=0;i<=100;i++){
        if(str1[i]=='\0'&&str2[i]=='\0'){
            break;
        }

        a=str1[i]-str2[i];


        if(str1[i]!=str2[i]){
            break;
        }
    
    }
    return a;
}

int main(){
    char result1[100];
    char result2[100];

    printf("첫 번째 문자열 : ");
    scanf("%s",result1);
    printf("두 번째 문자열 : ");
    scanf("%s",result2);

    int num = my_strcmp(result1,result2);

    if(num==0){
        printf("\n비교 결과 : 0");
        printf("\n같은 문자열입니다.");
    }
    else if(num<0){
        printf("\n첫 번째 문자열이 앞섭니다.");
    }
    else{
        printf("\n첫 번째 문자열이 뒤섭니다.");
    }

}