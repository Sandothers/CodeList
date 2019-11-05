/*
问题描述：
设计递归函数int GCD(int a,int b);计算正整数a和b的最大公约数并返回。如GCD(32,48)为16。
GCD(a,b)递归定义为：
GCD(a,b)=GCD(b,a MOD b) | a MOD b≠0
GCD(a,b)=b | a MOD b=0

输入与输出要求：
输入两个正整数a和b，输出两数的最大公约数数，占一行。

程序运行效果：
Sample 1：
32 48↙
16↙
Sample 2：
8 12↙
4↙
*/
#include <stdlib.h>
#include <stdio.h>
int GCD(int a,int b){
    int res;
    int tmp;
    if(a<b){
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a%b!=0) res=GCD(b,a%b);
    else res=b;
    return res;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",GCD(a,b));
    return 0;
}