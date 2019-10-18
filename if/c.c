/*
问题描述：
已知三角形的三条边长a、b、c，求三角形的面积。三角形的面积可以根据海伦公式来计算，这里S代表周长的一半，Area代表三角形的面积：

S=(A+B+C)/2 Area=√(S(S-a)(S-b)(S-c))
√为根号

求一个数的平方根需要用库函数sqrt(x)。参数x可以是整数或者浮点数，函数返回值是一个浮点数。在处理浮点数的时候，尽量使用双精度浮点型(double型)变量，避免使用单精度浮点型(float 型)变量。
注意：为了使用该函数，需要在main函数之前加上预处理语句：#include；%lf的默认输出为6位小数，如果想要输出3为小数，则应为%.3lf。

输入与输出要求：
输入包括三个正整数a、b、c，即三角形的三边长度。当输入的三条边a、b、c可以构成三角形时（即两条边的长度和大于第三条边的长度），输出三角形的面积，输出结果保留3位小数，假如a=5,b=12,c=13，则输出“30.000”，占一行；当a、b、c三条边无法构成三角形时,则输出“The egdes cannot make up of a triangle.”，占一行。测试用例保证运算中用到的整数可以用int型存储，小数可以用double型存储。

程序运行效果：
Sample 1：
5 12 13↙
30.000↙
Sample 2：
28 27 26↙
314.799↙
Sample 3：
1 2 3↙
The egdes cannot make up of a triangle.↙
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double s;
    double t;
    int a,b,c;
    int temp;
    scanf("%d %d %d",&a,&b,&c);
    if (a<=b){
        temp=a;
        a=b;
        b=temp;
    }
    if (a<=c){
        temp=a;
        a=c;
        c=temp;
    }
    if (a<c+b){
        s=(a+b+c)/2.0;
        t=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.3lf",t);
    }
    else{
        printf("The egdes cannot make up of a triangle.");
    }
    return 0;
}