/*
题目描述
int BinarySearch(int *a,int n,int key);利用二分查找算法，在升序排列的数组a的前n个元素中查找值为key的数组元素的下标。
如果数组a中存在整数key，则返回下标；否则返回－1。假设数组a中的元素互不相同。
输入与输出要求：首先输入两个整数n，m，分别代表数组a中元素的个数与需要查找的整数的个数，n（0<n<=2000000）与m(0<m<=100000)。
然后分别输入n个整数和m个整数，分别代表存放在数组中的数以及要查找的数。
输出m个整数，分别为要查找的数在数组a中的下标，如果数组a中不存在某个数，则输出-1。
数与数之间用空格分开，注意第n个数后没有空格而是换行符。

要求：
1、不允许使用全局变量；
2、用malloc函数动态申请内存存储这n个整数；
3、由于数据量较大，建议输入时使用scanf（）函数。


输入样例
15 
20
-293 -213 -23 0 1 5 11 23 56 67 87 273 999 2132 10000
-23 -99999 0 999 953 67 56 44 33 87 -293 23 11 273 -213 2132 10000 87654 1 5
输出样例
2 -1 3 12 -1 9 8 -1 -1 10 0 7 6 11 1 13 14 -1 4 5
*/

#include <stdio.h>
#include <stdlib.h>

int BinarySearch (int *a,int n,int key) {
    int l = 0;
    int r = n-1;
    int m = (l+r)/2+1;
    while(l<=r){
        if(a[m]==key){
            return m;
        }
        else if(a[0]==key){
            return 0;
        }
        else if(a[n-1]==key){
            return n-1;
        }
        else if(a[m]>key){
            r=m-1;
            m=l+(r-l)/2;
        }
        else{
            l=m+1;
            m=l+(r-l)/2;
        }
    }
    return -1;
}

void sort(int *a,int n) {
    int mark=0;
    int tmp=0;
    while(mark==0) {
        mark=1;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
                mark=0;
            }
        }
    }
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int *a = (int *)malloc(sizeof(int)*n);
    int *b = (int *)malloc(sizeof(int)*m);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int k=0;k<m;k++) {
        scanf("%d",&b[k]);
    }
    sort(a,n);
    for(int l=0;l<m;l++) {
        printf("%d ",BinarySearch(a,n,b[l]));
    }
    return 0;
}