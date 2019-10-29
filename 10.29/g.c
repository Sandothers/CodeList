/*
问题描述：
如果一个整数的各因子（包括1但不包括该整数本身)值之和等于该整数，则该整数称为“完全数”（perfect number)。例如，6是一个完全数，因为6=1+2+3。你的任务是设计函数isPerfect和printPerfect，判断并打印出区间[a,b]（1<=a<b<=20000）内的所有完全数，并统计完全数的总个数。
isPerfect函数原型：int isPerfect(int n);用于判断正整数n是否为完全数，若是，则返回值为1，否则为0。
printPerfect函数原型：void printPerfect(int n);用于打印出一个完全数n的所有因子，当执行printPerfect(6)时，打印效果为：6=1+2+3。

输入与输出要求：
输入两个正整数a和b，输出区间[a,b]内的所有完全数及完全数的总个数。

程序运行效果：
Sample 1:
1 10000↙

6=1+2+3
28=1+2+4+7+14
496=1+2+4+8+16+31+62+124+248
8128=1+2+4+8+16+32+64+127+254+508+1016+2032+4064
The total number is 4.
*/
#include <stdio.h>
#include <stdlib.h>
int isPerfect(int n){
    int sum=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum=sum+i;
        }
        if (sum>n) break;
    }
    if (sum==n&&n!=1) {
        return 1;
    }
    else return 0;
}

int printPerfect(int n){
    if (isPerfect(n)==1){
        printf("%d=1",n);
        for (int i=1;i<n;i++){
            if (n%i==0&&i!=1){
                printf("+%d",i);
            }
        }
        printf("\n");
        return 1;
    }
    else return 0;
}

int main(){
    int n,m;
    int ct=0;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++){
        if (printPerfect(i)) ct=ct+1;
    }
    printf("The total number is %d.",ct);
    return 0;
}