/*
题目描述
设有一个整型数组a中存放n个互不相同的整数，a中元素取值范围为0到n-1。
a数组的编码定义如下：a[0]的编码为0,放入b[0]；ai的编码为在a[0]、a[1]、…、a[i-1]中比a[i]的值小的数的个数，放入b[i]。
例如：a[6]={4，3，0，5，1，2}时，则b[6]={0，0，0，3，1，2}。
你有两个任务，任务一是编码，即已知n与数组a，求数组b；任务二是解码，即已知n与数组b，求数组a。
输入与输出要求：首先输入两个整数n和flag。n代表数组元素的个数（1<=n<=100），flag代表任务类型(flag＝1代表编码任务，flag＝2代表解码任务)。
然后是n个整数，当flag=1时，这n个数即代表数组a的内容；当flag=2时，这n个数即代表数组b的内容。
输出n个整数，当flag=1时即为编码后数组b的内容，当flag=2时，即为解码后数组a的内容。每个整数用空格分开，最后一个整数后是换行符。
程序运行效果：
Sample 1:
5↙
1↙
2 1 3 0 4↙
0 0 2 0 4
Sample 2:
8↙
2↙
0 1 2 0 1 1 4 5↙
3 6 7 0 2 1 4 5
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int ct=0;
    scanf("%d",&n);
    int list[n],listed[n],qu[n];
    int a;
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
        qu[i]=i;
    }
    if(a==1){
        listed[0]=0;
        for(int j=1;j<n;j++){
            for(int k=0;k<j;k++){
                if(list[j]>list[k]) ct++;
            }
            listed[j]=ct;
            ct=0;
        }
    }
    else if(a==2){
        for(int i=n-1;i>=0;i--){
            listed[i]=qu[list[i]];
            for(int k=list[i]+1;k<n;k++){
                qu[k-1]=qu[k];
            }
        }
    }
    for(int l=0;l<n;l++) printf("%d ",listed[l]);
    return 0;
}