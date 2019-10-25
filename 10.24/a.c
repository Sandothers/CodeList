/*
题目描述
所谓“同构数”是指这样的数，它出现在它的平方数的右边，例如5的平方数是25, 25的平方数是625，所以5和25都是同构数。你的任务是判断整数x是否是同构数。若是同构数，输出“Yes”，否则输出“No”。x的取值范围是(1<=x<=10000),如果输入的x不在允许范围内，则输出错误提示信息“x out of range”。

输入与输出要求：
输入一个整数(可以用int存储)。输出判断结果，占一行。

程序运行效果：
Sample 1:
25↙
Yes
Sample 2:
45↙
No
Sample 3:
20000↙
20000 out of range
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double site(int n){
    double i=1;
    while(n/10!=0){
        i=i+1;
        n=n/10;
    }
    return i;
}
int main(){
    int n;
    scanf("%d",&n);
    if (n>=1&&n<=10000){
        if ((n*n-n)%(int)pow(10,site(n))==0){
            printf("Yes");
        }
        else printf("No");
    }
    else printf("%d out of range",n);
    return 0;
}