/*
问题描述：
用牛顿迭代法求f(x)=0在x_0附近的一个实根的方法是：选一个接近于xx的真实根的近似根x_1
​​(本题中x_1取值为1)；当两次求出的根之差|x{n+1}-x{n}|小于等于一个足够小的值（如10^-5），就认为x_{n+1}足够接近于真实根。
牛顿迭代公式是：x_{n+1}=x_{n}-f(x_n)/f^{*}(x_n)
f^{*}(x_n)为对f(x_n)求一阶导数。牛顿迭代法的关键就是计算这个迭代公式，并在程序中进行迭代运算。有一个需要注意的问题是，该方法能够有效的基本条件是：迭代公式必须是收敛的，也就是通过迭代运算，每一次的结果必须是更接近真实值的。
你的任务是，已知方程ax^3+bx^2+cx+d=0的系数a、b、c、d，利用牛顿迭代法求方程根x1在1附近的一个实根，即x1=1
注意：建议浮点数用double存储，用float精度可能不够。

输入与输出要求：
输入四个正整数a、b、c、d，代表方程的系数。输出方程在1附近的一个实根，占一行。

程序运行效果：
Sample 1：
1 3 5 2↙
-0.546602↙
Sample 2：
12 34 25 30↙
-2.399306↙
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fxset(double n,int a,int b,int c,int d){
    double y;
    y = a*pow(n,3)+b*pow(n,2)+c*n+d;
    return y;
}
double fxsetdao(double n,int a,int b,int c){
    double y;
    y = 3*a*pow(n,2)+2*b*n+c;
    return y;
}
int main(){
    double gap=1;
    int a,b,c,d;
    double fa=1,fb=1;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    while (gap>0.00001){
        fb = fa-fxset(fa,a,b,c,d)/fxsetdao(fa,a,b,c);
        gap = fabs(fa-fb);
        fa = fb;
    }
    printf("%lf",fb);
    return 0;
}