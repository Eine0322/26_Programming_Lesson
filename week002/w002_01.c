#include <stdio.h>
int main(){
	int a ;

	printf("숫자를 입력하시오 : ") ;
	scanf("%d",&a);
	
	if(a%2==0){
	printf("짝수입니다.");
	}
	else{
	printf("홀수입니다.");
	}
	}