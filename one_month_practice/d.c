/*
题目描述
问题描述：哥德巴赫猜想中写到，一个充分大的偶数（大于等于4)，它可以分解为两个素数之和。你的任务是用计算机简单验证哥德巴赫猜想，已知一个偶数n（大于等于4)，将它分解为两个素数的所有可能情况打印出来。
输入与输出要求：输入一个偶数n（4≤n≤10000)，代表待验证的偶数。输出偶数分解为两个素数之和的所有可能情况，每种情况占一行。

输入样例
66
输出样例
5 61
7 59
13 53
19 47
23 43
29 37
*/
#include<stdlib.h>
#include<stdio.h>
int isPrime(int x){
    for(int i = 2; i < x; i++){
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int isPrime();
    int n;
    int a,b;
    int half;
    scanf("%d",&n);
    half=n/2;
    for (int i = 2; i <= half; i++)
    {
        if (isPrime(i)==1&&isPrime(n-i)==1)
        {
            printf("%d %d\n",i,n-i);
        } 
    }
    return 0;
}
