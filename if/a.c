/*
题目描述
已知有两个整数，请使用if-else选择结构将它们中的较大数选择出来，存到max变量中；将较小数选择出来，存到min变量中，并将选择结果输出。

输入与输出要求：
输入包括两个整数，占一行，用空格分隔。输入的整数可以相同，此时输出如下内容，如“The two numbers are equal.”，占一行。当输入不相同时，输出如下内容，如“The larger number is 100, the smaller number is 25.”（假设输入的两个数分别为100和25），占一行。

程序运行效果：
Sample 1：
100 25↙
The larger number is 100, the smaller number is 25.↙
Sample 2：
100 100↙
The two numbers are equal.↙
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if (a==b){
        printf("The two numbers are equal.");
    }
    else if(a>b){
        printf("The larger number is %d, the smaller number is %d.",a,b);
    }
    else if(a<b){
        printf("The larger number is %d, the smaller number is %d.",b,a);
    }
    return 0;
}