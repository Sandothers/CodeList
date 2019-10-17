#include <stdio.h>
#include<stdio.h>
//广义欧几里得算法
int main(){
    int a,b;
    int c;
    int i=1;
    printf("请输入a,b：");
    scanf("%d %d",&a,&b);
    for (i; i<=b; i++)
    {
        if((i*a)%b==1){
            c=i;  
        }
    }
    printf("%d",c);
    return 0;
}