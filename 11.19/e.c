/*
题目描述
输入第一行为一个整数n(0<n<=1000),代表待排序元素的个数。第二行是n个整数，每个整数都不会超过int型的存储范围，为待排序元素。
输出只有一行，为输入的n个待排序元素按从小到大排序后的结果。（建议采用起泡排序算法）

输入样例
8
49 38 65 97 76 13 27 4
输出样例
4 13 27 38 49 65 76 97
*/

#include <stdio.h>
#include <stdlib.h>
int swap(int a,int b){
    int tmp;
    if(b<a){
        tmp=a;
        a=b;
        b=tmp;
        return 1;
    }
    else return 0;
}
int main(){
    int num;
    int mark=1;
    int temp;
    scanf("%d",&num);
    int judge[num-1];
    int list[num];
    for(int i=0;i<num;i++) scanf("%d",&list[i]);
    while(mark==1){
        mark=0;
        for(int i=0;i<num-1;i++){
            if(list[i]>list[i+1]){
                temp=list[i+1];
                list[i+1]=list[i];
                list[i]=temp;
                mark=1;
            }
        }
    }
    for(int i=0;i<num;i++) printf("%d ",list[i]);
    return 0;
}