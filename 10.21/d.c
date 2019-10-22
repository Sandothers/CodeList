/*
题目描述
有一根绳子的长度为n（3<=n<1000且为整数），将该绳子分成三段，每段的长度为正整数，输出由该三段绳子组成的三角形个数。


输入样例
3
输出样例
1
*/

#include <stdio.h>
#include <stdlib.h>

int isT(int a,int b,int c){
    int temp;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c){
        temp=a;
        a=c;
        c=temp;
    }
    if (a>=b+c) return 0;
    else return 1;
}
int main(){
    int length;
    int x,y;
    int counter = 0;
    scanf("%d",&length);
    for (int i = 1; i <= length/2; i++){
        for (int j = 1; j <= i; j++){
            if(isT(i,j,length-i-j)==1&&length-i-j>=i) counter++;
        }
    }
    printf("%d",counter);
    return 0;
}