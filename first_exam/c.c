/*
题目描述
有若干整数序列，请找到这些序列的极值（最大值和最小值），并按要求输出。

输入:
第一行为一个整数 n （0<n) ,表示共有n个序列。后边是n 行，代表这n个序列。
每个序列均为若干个用空格分隔的整数（至少有2个），其中除了最后一个数为-1，其余均为正数。注意：-1不算这个序列中的数，只是结束标志。

输出：
若干行，程序应依次处理这n个序列，如果某个序列的最大值减去最小值可以被3整除，则在一行内依次输出该序列的最大值和最小值（中间用一个空格分隔）。
测试用例保证所有整数可以用int存储。


输入样例
4
1 2 3 4 5 6 7 -1
1 2 3 4 5 6 7 8 -1
1 2 3 4 5 6 7 8 9 -1
1 2 3 4 5 6 7 8 9 10 -1
输出样例
7 1
10 1
*/
#include <stdio.h>
#include <stdio.h>
int main() {
    int input;
    int counter;
    int round;
    int max=0;
    int min=0;
    int i=0;
    int j=0;
    scanf("%d",&round);
    int t[round];
    int maxlist[round];
    int minlist[round];
    for (i; i < round; ++i) {
        counter=0;
        do{
            scanf("%d", &input);
            counter=counter+1;
            if (input!=-1){
                if (counter==1){
                    min=input;
                    max=input;
                }
                if(input>=max){
                    max=input;
                }
                if(input<=min){
                    min=input;
                }
            }
        }while (input!=-1);
        if ((max-min)%3==0&&max!=0&&min!=0){
            minlist[i]=min;
            maxlist[i]=max;
            t[i]=1;
        }
        min=0;
        max=0;
    }
    for (j = 0; j < round; ++j) {
        if (((maxlist[j]-minlist[j])%3==0)&&maxlist[j]!=0&&minlist[j]!=0&&t[j]==1){
            printf("%d %d\n",maxlist[j],minlist[j]);
        }
    }
    return 0;
}