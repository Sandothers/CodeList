/*
问题描述：
任意给定一个n*m的矩阵，矩阵的行数为n,列数为m。你的任务是实现矩阵的转置，即行列互换。

输入与输出要求：
输入两个整数n、m，代表矩阵的行数与列数，n、m的范围均是1—100。然后输入n*m个整数，即此矩阵的元素。
输出经过矩阵转置得到的新矩阵，新矩阵占m行，n列。每行的每个元素用空格分隔，注意最后一个数的后面为换行符。
程序运行效果：
Sample 1：
3 5↙
5 5 5 5 5↙
3 3 3 3 3↙
1 1 1 1 1↙

5 3 1
5 3 1
5 3 1
5 3 1
5 3 1
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int sqr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&sqr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",sqr[j][i]);
            if(j==m-1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}