/*
题目描述
已知一个长度为n的整数数组，在保证原顺序的前提下，将该数组中所有的偶数放到所有的奇数之前，存到一个新数组中，并将新数组输出。
输入与输出要求：首先输入一个整数n，代表输入整数个数（n的范围是1—200）。
然后输入n个整数，每个整数的取值范围是int型范围。输出新数组中的元素，数与数之间用空格分开，第n个数后是换行符。
程序运行效果：
10↙
3 9 4 5 8 7 10 2 6 1↙
4 8 10 2 6 3 9 5 7 1
*/
#include <stdio.h>
#include <stdlib.h>
int isJ(int n){
    int j;
    j=n/2;
    if(n==j*2) return 0;
    else return 1;
}
int main(){
    int mark=0;
    int n;
    scanf("%d",&n);
    int list[n];
    int listj[n];
    int listo[n];
    for(int j=0;j<n;j++){
        listj[j]=-1;
        listo[j]=-1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
        if(isJ(list[i])==0) listo[i]=list[i];
        else listj[i]=list[i];
    }
    for(int i=0;i<n;i++){
        if(listo[i]!=-1){
            printf("%d ",listo[i]);
            mark=mark+1;
        }
    }
    for(int i=0;i<n;i++){
        if(listj[i]!=-1){
            mark=mark+1;
            if(mark==n){
                printf("%d\n",listj[i]);
            }
            else printf("%d ",listj[i]);
        }
        
    }
    return 0;
}