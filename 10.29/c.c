/*
问题描述：
设计函数int getDigit(long long n)，计算并返回正整数n的长度。

输入与输出要求：
输入一个正整数n，n的取值范围不会超过long long类型变量。输出该正整数的位数，如“The integer 20 has 2 digits.”，占一行。注意单词digits的单复数形式。

程序运行效果：
Sample 1:
1234567890↙
The integer 1234567890 has 10 digits.
*/
#include <stdio.h>
#include <stdlib.h>
int getDigit(long long n){
    int b=1;
    while (n/10!=0){
        n=n/10;
        b=b+1;
    }
    return b;
}
int main(){
    long long int n;
    scanf("%lld",&n);
    if (getDigit(n)==1) printf("The integer %lld has %d digit.",n,getDigit(n));
    else printf("The integer %lld has %d digits.",n,getDigit(n));
    return 0;
}