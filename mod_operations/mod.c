#include<stdio.h>
//求两个数的模
int main(){
    int a,b;
    printf("请输入两个数字进行模运算：");
    scanf("%d %d",&a,&b);
    printf("%d mod %d = %d",a,b,(a%b));
    return 0;
}