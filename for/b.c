/*
问题描述：
已知一个三位正整数n，100<=n<=999，你的任务是将n的百位数字与个位数字对调，得到一个新的三位数，将其输出。需要注意的是：如果当百位数字与个位数字对调后，三位数变为两位数，则不能对这个三位数进行位数对调处理。

输入与输出要求：
输入一个三位正整数n，100<=n<=999。当n可以进行百位数字与个位数字对调时，例如n=123，你应输出“321”；当n不可以进行百位数字与个位数字对调时，例如n=980，你应输出“The number cannot be changed.”。

程序运行效果：
Sample 1：
123↙
321↙
Sample 2：
980↙
The number cannot be changed.↙
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int x,y,z;
    scanf("%d",&a);
    x=a/100;
    y=(a%100)/10;
    z=a%10;
    if (z==0)
    {
        printf("The number cannot be changed.");
    }
    else {
        printf("%d",100*z+10*y+x);
    }
    return 0;
}