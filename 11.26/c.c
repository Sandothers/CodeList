/*
问题描述：
void findMin(int M[][MAX],int x[],int n,int m); 将二维数组M中每列的最小元素，依次放入一维数组x中，二维数组M的行数为n,列数为m。
输入与输出要求：
输入两个整数n、m，代表二维数组M的行数与列数，n、m的范围均是1—100。然后是n*m个整数，即二维数组M的元素。输出x数组中的元素，每个元素用空格分隔。
程序运行效果：
Sample 1：
3 4↙
22 45 56 30↙
19 33 45 38↙
20 22 66 40↙

19 22 45 30
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int sqr[m][n];
    int maxlist[n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&sqr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        maxlist[i]=sqr[0][i];
        for(int j=0;j<m;j++){
            if(sqr[j][i]<maxlist[i]) maxlist[i]=sqr[j][i];
        }
    }
    for(int i;i<n;i++) printf("%d ",maxlist[i]);
    return 0;
}