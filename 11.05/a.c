/*
题目见a.png
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float gen(int a,float b){
    float result;
    if (a!=1){
        result=sqrtf(a*1.0+gen(a-1,b));
    }
    else result=sqrtf(a*1.0+b);
    return result;
}
int main(){
    int gn;
    int a;
    float b;
    scanf("%d",&gn);
    float res[gn];
    for(int i=0;i<gn;i++){
        scanf("%d %f",&a,&b);
        res[i]=gen(a,b);
    }
    for (int i = 0; i < gn; i++){
        printf("%.3f\n",res[i]);
    }
    return 0;
}