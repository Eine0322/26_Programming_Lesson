#include <stdio.h>
int main(){
    int a;
    printf("나이 : ");
    scanf("%d",&a);
    printf("20살 이상인가? %d\n",a>=20);
    printf("30살 이하인가? %d\n",a<=30);
    printf("20살 이상이면서 30살 이하인가? %d", 20<=a&&a<=30);

}