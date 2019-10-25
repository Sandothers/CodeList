/*
题目描述
在一个平面上有一个圆和n条直线，这些直线中每一条在圆内同其他直线相交，假设没有3条直线相交于一点，试问这些直线将圆分成多少区域。
输入：
只有一个整数n(0<=n<100)。
输出：
只有一个整数，为圆被n条直线分成的区域的块数。


输入样例
1
输出样例
2
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    long int num=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        num=num+i;
    }
    printf("%ld",num);
    return 0;
}