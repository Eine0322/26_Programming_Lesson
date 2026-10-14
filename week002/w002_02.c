#include <stdio.h> 
int main(){
	int a;
	printf("숫자를 입력하시오 : ");
	scanf("%d",&a);
	
	if(a>0){
	printf("양수");
	}
	else if(a<0){
	printf("음수");
	}
	else{
	printf("0");
	}
}