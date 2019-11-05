/*
问题描述：
设计递归函数void recurPrintFactor(int n,…);打印出对n进行素数分解的结果。当执行recurPrintFactor(60)时，打印效果为：60=2*2*3*5。在函数的参数中“…”代表你可以添加参数。并且也可使用全局变量。关于素数分解的描述，见实验五第14题。
设计程序，已知一段数据范围[a,b]，且a<=b，要求对其中的每一个数进行素数分解。你也可以设计其它辅助函数，如判断素数的函数isPrime(n)。

输入与输出要求：
输入两个正整数a、b，代表所分解的区间，满足1<=a<=b<=100000，且b-a<=100。输出b-a+1行，即b-a+1个数的分解。

程序运行效果：
Sample 1：
100 105↙
100=2*2*5*5↙
101=101↙
102=2*3*17↙
103=103↙
104=2*2*2*13↙
105=3*5*7↙
Sample 2：
9999 10005↙
9999=3*3*11*101↙
10000=2*2*2*2*5*5*5*5↙
10001=73*137↙
10002=2*3*1667↙
10003=7*1429↙
10004=2*2*41*61↙
10005=3*5*23*29↙
*/
#include <stdlib.h>
#include <stdio.h>
int isPrime(int n){
    for(int i = 2; i < n; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
void recurPrintFactor(int n){
    int i=2;
    if(n==1) printf("%d",n);
    else if(isPrime(n)==1) printf("%d",n);
    else{
        for(i;i<=n;i++){
        if(isPrime(i)==1&&n%i==0){
            printf("%d*",i);
            if(n/i!=1) recurPrintFactor(n/i);
            break;
        }
        }
    }
}
int main(){
    int min,max;
    scanf("%d %d",&min,&max);
    for(min;min<=max;min++){
        printf("%d=",min);
        recurPrintFactor(min);
        printf("\n");
    }
    return 0;
}