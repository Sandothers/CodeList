/*
问题描述：
任意给定一个n*n的矩阵，矩阵的行数与列数均为n。你的任务是通过行变换，使得矩阵每行元素的平均值按递增顺序排列。如果出现有的行平均值相同的情况，则按照原顺序输出。

输入与输出要求：
输入一个整数n代表矩阵的行数（列数），n的范围是1—100。然后输入n*n个整数，即此矩阵的元素。矩阵元素的绝对值不会超过1000000。输出经过行变换后的新矩阵。每行的每个元素用空格分隔，注意最后一个元素后为换行符。

程序运行效果：
Sample 1：
3↙
5 5 5↙
3 3 3↙
1 1 1↙

1 1 1
3 3 3
5 5 5
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int t;
    int mark=1;
    scanf("%d",&n);
    int mat[n][n];
    int matcopy[n];
    for(int i=0;i<n;i++) matcopy[i]=i;
    int avg[n];
    for(int i=0;i<n;i++){
        avg[i]=0;
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            avg[i]=avg[i]+mat[i][j];
        }
    }
    while(mark==1){
        mark=0;
        for(int i=0;i<n-1;i++){
            if(avg[i]>avg[i+1]){
                t=avg[i+1];
                avg[i+1]=avg[i];
                avg[i]=t;
                t=matcopy[i+1];
                matcopy[i+1]=matcopy[i];
                matcopy[i]=t;
                mark=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[matcopy[i]][j]);
            if(j==n-1) printf("\n");
        }
    }
    return 0;
}