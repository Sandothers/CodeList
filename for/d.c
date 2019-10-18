/*
题目描述
已知一个整数n，打印1—n所有除以m后所得商正好是它的各个数字平方和的数。

输入与输出要求：
输入两个整数n、m，它们用空格分开且n与m都不会超过10000。输出满足条件的整数，每5个数占一行，用tab分隔，最后一个整数后为换行符。测试用例保证有满足条件的数。

程序运行效果：
Sample 1：
1000 11↙
131 241 324 550 624
803 900 910
Sample 2：
4000 10↙
10 103 113 204 214
242 343 351 452 505
515 652 743 751 804
814 842 903 913 1196
1388 1479 1679 1788 1996
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m;
    int s;
    int i;
    int sq,sk;
    int sum;
    int printnum=0;
    scanf("%d %d",&n,&m);
    for (i = 1; i <= n; i++)
    {
        sum=0;
        s=i/m;
        int p=i;
        for (int j = 0; j < 5; j++)
        {
            sq=p%10;
            sum=sum+sq*sq;
            sk=p/10;
            p=sk;
        }
        if (s==sum)
        {
            printnum=printnum+1;
            printf("%d",i);
            if (printnum%5==0)
            {
                printf("\n");
            }
            else if (printnum!=0&&i!=n)
            {
                printf("\t");
            }
        }
    }
    printf("\n");
    return 0;
}