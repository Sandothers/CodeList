/*
问题描述：
设计递归函数int countBinary(int n);用于将非负十进制整数n转换成二进制形式，并返回该二进制数的位数。如十进制数13的二进制形式为1101，位数为4，那么调用countBinary(13)的结果为4。
要求同学们先写出该问题的递归定义式，再设计递归函数。

输入与输出要求：
输入一个非负整数n。输出求得的结果，如输入“13”，输出“4”，占一行。

程序运行效果：
Sample 1：
13↙
4↙
Sample 2：
2000000000↙
31↙
*/

#include <stdio.h>
#include <stdlib.h>
int countBinary(int n){
    int res;
    int i=1;
    if(n!=1&&n!=0) res=1+countBinary(n/2);
    else res=1;
    return res;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",countBinary(num));
    return 0;
}