/*
问题描述：
设计递归函数int convert(int n);用于将二进制数n转换为十进制数并返回。
递归函数设计思路与提示：
如将1101转换为十进制的形式：
1101=1*2^0+0*2^1+1*2^2+1*2^3=1101%10+convert(110)*2；
110=0*2^0+1*2^1+1*2^2=110%10+ convert(11)*2；
11=1*2^0+1*2^1=11%10+convert(1)*2；
convert(1)=1；
所以得到以下结论：当n==0或n==1时，函数返回n，否则返回n%10+convert(n/10)*2。

输入与输出要求：
输入一个整数n，代表二进制数，其长度不大于10。输出转换后的十进制数，占一行。

程序运行效果：
Sample 1：
101010↙
42↙
Sample 2：
11↙
3↙
*/

#include <stdio.h>
#include <stdlib.h>

int convert(int n){
    int res;
    if(n==1||n==0) res=n;
    else res=n%10+convert(n/10)*2;
    return res;
}
int main(){
    int b;
    scanf("%d",&b);
    printf("%d",convert(b));
    return 0;
}