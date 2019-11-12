/*
题目描述
设有整数数组A和B，它们长度均为n。A数组中的元素为任意整数，不超过int型数据范围。B数组中元素的值互不相同，且取值介于0至n-1之间。
现要求按数组B的内容调整A中数据的次序，比如当B[0]=9时，则要求将A[0]的内容与A[9]互换。
输入与输出要求：首先输入一个整数n（0<n<=10），代表数组A、B元素的个数。然后输入n个整数代表数组A中的元素。
最后输入 n个整数代表数组B中的元素，注意B中元素的要求。输出调整后A数组的内容，数与数之间用空格分开，注意第n个数后没有空格而是换行符。
程序运行效果：
Sample 1:
10↙
5 10 3 9 4 12 8 7 11 2↙
1 3 6 9 2 7 0 8 5 4↙
3 9 4 2 5 12 10 11 7 8
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int mark;
    int temp;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    for(int k=0;k<n;k++){
        temp=a[k];
        a[k]=a[b[k]];
        a[b[k]]=temp;

    }
    for(int l=0;l<n;l++){
        printf("%d ",a[l]);
    }
    return 0;
}