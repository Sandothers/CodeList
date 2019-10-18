/*
题目描述
已知一个只包含0和1的二进制数，二进制数的长度不大于10。你的任务是将其转换为十六进制数并打印出来。
输入与输出要求：输入一个整数n，代表二进制数。输出转换得到的十进制数，占一行。

输入样例
1101↙
D
输出样例
11111↙
1F
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int BinToDec(long long int n)
{
    int d = 0;
    int i = 0;
    int counter;
    while (n!=0)
    {
        counter = n%10;
        n = n/10;
        d = d+counter*pow(2,i);
        i = i+1;
    }
    return d;
}
int main(){
    long long int dec;
    long long int bin;
    scanf("%lld",&bin);
    dec = BinToDec(bin);
    printf("%X",dec);
}