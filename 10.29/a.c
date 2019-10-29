/*
题目描述
已知分段函数，当x<1时，y=x；当1<=x<=10时，y=2x-1；当10< x <=100时，y=3x-11；当x>100时，y=x*x-24。
设计函数int fun(int x)，根据分段函数计算y值。
函数返回值范围不会超过int型变量。
输入为一个整数x,即自变量x。输出为函数值y的结果。


输入样例
Sample 1:
-99


Sample 2:
100
输出样例
Sample 1:
The result is:y=-99

Sample 2:
The result is:y=289
*/

#include <stdio.h>
#include <stdlib.h>
int fun(int x){
    int y;
    if (x<1) y=x;
    else if (x>=1&&x<=10) y=2*x-1;
    else if (x>10&&x<=100) y=3*x-11;
    else y=x*x-24;
    return y;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("The result is:y=%d",fun(x));
    return 0;
}