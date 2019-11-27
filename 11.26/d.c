/*
问题描述：
任意给定一个nm的矩阵，矩阵的行数为n,列数为m。你的任务是寻找该矩阵的鞍点。一个矩阵的鞍点即该位置上的元素在所在行上最大，在所在列上最小。
有的矩阵也可能没有鞍点。不难证明，如果一个矩阵有鞍点，那么这个鞍点一定是唯一的。
如果某个矩阵只有1行（1列），则默认该行上的所有元素满足列上最小（行上最大）的要求。
例如矩阵M：
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
该矩阵的鞍点为M[0][4]=5，该数在第0行最大，在第4列最小。
注：测试用例保证同行或同列内没有相等的值。
输入与输出要求：
输入两个整数n、m，代表矩阵的行数与列数，n、m的范围均是1—100。然后输入nm个整数，即此矩阵的元素。
如果找到该矩阵的鞍点则输出“The saddle point is (x,y)=v.”，x为该鞍点所在的行，y为该鞍点所在的列，v为该位置上元素的值；
如果该矩阵没有鞍点，则输出“There is no saddle point in the matrix.”。
程序运行效果：
Sample 1：
4 5↙
1 2 3 4 5↙
2 4 6 8 10↙
3 6 9 12 15↙
4 8 12 16 20↙

The saddle point is (0,4)=5.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int x=0,y=0;
    int m,n;
    int mark=0;
    int t=0;
    scanf("%d %d",&m,&n);
    int sqr[m][n];
    int minlist;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&sqr[i][j]);
        }
    }
    if(m!=1&&n!=1){
        x=0,y=0;
        for(int i=0;i<n;i++){
            minlist=sqr[0][i];
            for(int j=0;j<m;j++){
                if(sqr[j][i]<minlist){
                    minlist=sqr[j][i];
                    x=j;
                    y=i;
                }
            }
            for(int k=0;k<n;k++){
                if(minlist<sqr[x][k]) mark=1;
                else if(minlist==sqr[x][k]) y=k;
            }
            if(mark==0){
                printf("The saddle point is (%d,%d)=%d.",x,y,minlist);
                t=1;
                break;
            }
            mark=0;
        }
        if(t==0) printf("There is no saddle point in the matrix.");
    }
    else if(m==1){
        minlist=sqr[0][0];
        for(int i=0;i<n;i++){
            if(minlist<=sqr[0][i]){
                x=0;
                y=i;
                minlist=sqr[0][i];
            }
        }
        printf("The saddle point is (%d,%d)=%d.",x,y,minlist);
    }
    else if(n==1){
        minlist=sqr[0][0];
        for(int i=0;i<m;i++){
            if(minlist>=sqr[i][0]){
                x=i;
                y=0;
                minlist=sqr[i][0];
            }
        }
        printf("The saddle point is (%d,%d)=%d.",x,y,minlist);
    }
    return 0;
}