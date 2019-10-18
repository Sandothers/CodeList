/*
题目描述
已知正整数n、m，设有一个n*m方格的棋盘（l<=n<=100，1<=m<=100)。求出该棋盘中包含正方形与长方形（长方形中不包括正方形)的个数。
例如，当n=2，m＝3时，正方形的个数有8个，即边长为1的正方形有6个；边长为2的正方形有2个。长方形的个数有10个，即2*1的长方形有4个；1*2的长方形有3个；3*1的长方形有2个；3*2的长方形有1个。

输入与输出要求：输入两个正整数n、m，代表棋盘有n行m列。输出计算结果。

输入样例
3 4↙
20 40
输出样例
2 5↙
14 31
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    int temp;
    int sum;
    long int sqnum=0;//正方形数
    long int sqrnum=0;//总数
    scanf("%d %d",&m,&n);
    if (m<=n) {
        temp=m;
        m=n;
        n=temp;
    }
    for (int i = 1; i <= n; i++){
        sqnum=(m-i+1)*(n-i+1)+sqnum;
    }
    for (int j = 1; j <= m; j++){
        for (int k = 1; k <= n; k++){
            sqrnum=sqrnum+(m+1-j)*(n+1-k);
        }   
    }
    printf("%ld %ld",sqnum,sqrnum-sqnum);
    return 0;
}