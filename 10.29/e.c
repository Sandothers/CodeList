/*
问题描述：
设计函数int mypow(int x,int n)，返回正整数x的n次幂，如mypow(2,10)值为1024。

输入与输出要求：
输入两个非负整数x、和n，x的n次幂不会超过int型范围。输出计算结果，占一行。

程序运行效果：
Sample 1:
2 10↙
1024
Sample 2:
2 30↙
1073741824
*/
#include <stdio.h>
#include <stdlib.h>
int mypow(int x,int n){
    int c=1;
    while(n!=0){
        c=c*x;
        n=n-1;
    }
    return c;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",mypow(x,y));
    return 0;
}