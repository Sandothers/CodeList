/*
题目描述
给定一个长度为n的整数数组，数组中连续的相等元素构成的子序列称为平台。试设计算法，求出数组中最长平台的长度。
输入与输出要求：首先输入一个整数n，代表数组元素的个数，n不会超过1000。然后是n个整数，每个整数的取值范围是int型范围。输出最长平台的长度，占一行。
程序运行效果：
Sample 1：
15↙
1 1 2 2 4 5 7 7 7 7 7 7 3 3 9↙
6
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int mark=0;
    int n;
    int p;
    int max=-1;
    scanf("%d",&n);
    int list[n];
    int con[n];
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    for(int j=0;j<n;j++){
        p=list[j];
        con[j]=0;
        for(int k=j;k<n;k++){
            if(p==list[k]&&mark==0){
                con[j]++;
                if(p!=list[k+1]&&k<n-1) mark=1;
            }

        }
        mark=0;
    }
    for(int l=0;l<n;l++){
        if(con[l]>max) max=con[l];
    }
    printf("%d",max);
    return 0;
}