/*
题目描述
有n个互不相同的整数，存储在数组中。在这n个整数中查找m个整数，如果存在，则打印出与之相邻的整数；否则就显示无此数。
输入与输出要求：首先输入一个整数n以及n个整数（n的范围是1—1000），然后输入整数m，代表查询次数（m的范围是1—100），接着输入m个待查询的数。
输出m行查询的结果，每次的查询结果中可能有一个数、两个数或没有数。若没有数则输出“NULL”。

要求：实现如下函数完成一个元素的查找：
int findInArray(int *array,int element,int size)
其中array为指向待查找数据的指针，element为要查找的元素，size为待查找数组的大小。如果找到了则返回该元素的位置，如果没找到，则返回-1 。


输入样例
5
89 7890 22 56 87
6
89 7890 22 56 87 999
输出样例
7890
89 22
7890 56
22 87
56
NULL
*/

#include <stdio.h>
#include <stdlib.h>

int findInArray(int *array,int element,int size){
    int mark=0;
    for(int i=0;i<size;i++){
        if(array[i]==element){
            mark=1;
            return i; 
        }
    }
    if(mark==0) return -1;
}

int main(){
    int n,m;
    //数据输入
    scanf("%d",&n);
    int list1[n];
    for(int i=0;i<n;i++) scanf("%d",&list1[i]);
    scanf("%d",&m);
    int list2[m];
    for(int l=0;l<m;l++) scanf("%d",&list2[l]);

    int pos = 0;
    for(int k=0;k<m;k++){
        pos = findInArray(list1,list2[k],n);
        if(pos != -1){
            if(n==1){
                //printf("%d",list1[0]);
                printf("NULL\n");
            }
            else if(pos==0){
                printf("%d\n",list1[pos+1]);
            }
            else if(pos==n-1){
                printf("%d\n",list1[pos-1]);
            }
            else if(pos>0&&pos<n-1){
                printf("%d %d\n",list1[pos-1],list1[pos+1]);
            }
        }
        else printf("NULL\n");
    }
    return 0;
}