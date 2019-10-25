/*
题目描述
韩信有一队兵，他想知道一共有多少人，便让士兵排队报数。站5人一排，多出1人；站6人一排，多出5人；站7人一排，多出6人；站11人一排，多出10人。问韩信至少有多少兵？

输入：
为一个整数n(0<n<10000)。
输出：
一个不小于n的整数，为韩信可能拥有兵的数量的最小值。


输入样例
200
输出样例
461
*/

#include <stdio.h>
#include <stdlib.h>
int suitable(int n){
    if (n%5==1&&n%6==5&&n%7==6&&n%11==10){
        return 1;
    }
    else return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    for (int i=num;;i++){
        if(suitable(i)==1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}