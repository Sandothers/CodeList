#include<stdio.h>
//两个数相乘mod另一个数
int main(){
    int a,b,c;
    printf("请输入三个数字：");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d * %d mod %d = %d",a,b,c,(a*b)%c);
    return 0;
}