/*
题目描述
有n个互不相同的整数，存储在数组中。在这n个整数中查找m个整数，如果存在，则打印出与之相邻的整数；否则就显示无此数。
输入与输出要求：首先输入一个整数n以及n个整数（n的范围是1—1000），然后输入整数m，代表查询次数（m的范围是1—100），接着输入m个待查询的数。
输出m行查询的结果，每次的查询结果中可能有一个数、两个数或没有数。若没有数则输出“NULL”。
程序运行效果：
Sample 1：
5↙
89 7890 22 56 87↙
6↙
89 7890 22 56 87 999↙
7890
89 22
7890 56
22 87
56
NULL
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int mark=0;
    int n;
    scanf("%d",&n);
    int num[n];
    for(int j=0;j<n;j++){
        scanf("%d",&num[j]);
    }
    int m;
    scanf("%d",&m);
    int t[m];
    for(int i=0;i<m;i++){
        scanf("%d",&t[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(t[i]==num[j]){
                if(n==1) mark=0;
                else mark=1;
                if(n!=1){
                    if(j==n-1) printf("%d\n",num[j-1]);
                    else if(j==0) printf("%d\n",num[j+1]);
                    else printf("%d %d\n",num[j-1],num[j+1]);
                }
            }
        }
        if(mark==0){
            printf("NULL\n");
        }
        mark=0;
    }
    return 0;
}