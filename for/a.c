/*
问题描述：
已知两个整数x和y（x为任意整数，y为非负整数），利用循环结构计算x的y次幂并输出。假设x,y及x的y次幂不会超过int型范围。

输入与输出要求：
输入包括两个整数，即x与y的值，占一行，以空格分隔。输出x的y次幂的计算结果（测试数据中保证没有0的0次幂），占一行。例如输出2的4次幂结果，即“16”。

程序运行效果：
Sample 1：
2 4↙
16↙
Sample 2：
-7 5↙
-16807↙
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    int sum=1;
    int i;
    scanf("%d %d",&a,&b);
    for ( i = 0; i < b; i++)
    {
        sum=a*sum;
    }
    printf("%d",sum);
    return 0;
}