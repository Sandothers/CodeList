/*
上小学四年级的小王同学虽然很笨，但他非常喜欢钻研奥数题。他遇到了这样的一个计算分数的问题：S(n)=1/3+3/5+5/7+…+n/(n+2)，n为小于40的奇数。题目要求根据n来计算S(n)的值。他苦思冥想也没找出规律来解这道题，其实这道题目根本就没有规律，是老师用来难为不听话的学生用的。小王同学知道了实情后仍然不放弃去解这道题。当n值很大时，用纸笔计算非常费力，用计算器也很麻烦，有的计算器也不能计算分数。现在他只能求助你来编程帮他实现计算S(n)了，注意S(n)的计算结果应为分数形式。

输入与输出要求：
输入一个整数n，n的范围是1—40，且为奇数。输出S(n)的计算结果，如输出S(3)的结果：“14/15”。

程序运行效果：
Sample 1:
7↙
764/315
Sample 2:
21↙
2861599189/334639305
Sample 3:
39↙
116320091982737732/6845630929362225
*/

#include <stdio.h>
#include <stdlib.h>
long long int maxin(long long int a,long long int b){
    long long int tmp;
    while(a%b!=0){
        tmp=a;
        a=b;
        b=tmp%b;
    }
    return b;
}

int main(){
    int n;
    long long int down=1;
    long long int up=0;
    long long int down1;
    long long int up1;
    long long int tmp;
    long long int tmp0;
    long long int tmp1;
    scanf("%d",&n);
    int num=(n+1)/2;
    for (int i = 3; i <= n+2; i=i+2){
        down1=i;
        up1=1;
        tmp1=down*down1;
        tmp0=up*down1+up1*down;
        down=tmp1/maxin(tmp1,tmp0);
        up=tmp0/maxin(tmp1,tmp0);
    }
    long long lstd=2*down;
    long long lstu=(n+1)*down-4*up;
    printf("%lld/%lld",lstu/maxin(lstd,lstu),lstd/maxin(lstd,lstu));
    return 0;
}