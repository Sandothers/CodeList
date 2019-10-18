/*
题目描述
求ax^2＋bx＋c＝0的根。分别考虑d＝b^2－4ac大于零，等于零和小于零三种情况。
a、b、c要求是浮点型。程序要对a、b、c的各种情况进行处理。如判断a是否为0，b^2－4ac分别为大于0、小于0、等于0。
解答提示：
1)求一浮点数的平方根可以用库函数sqrt(x)。x要求是浮点数。如以下赋值语句：y=sqrt(x);表示求x的平方根，赋值给y。为了使用该函数，需要在main函数之前加上预处理语句：#include。
2)如何判断两个浮点数是否相等：
假设f1和f2是两个浮点数。若想写一个关系表达式，判断f1和f2是否相等，不能写成：if(f1==f2),而是要写成f1和f2的差的绝对值近似接近于0，如写成：if(fabs(f1-f2)<=1e-6)。其中1e-6表示10的－6次方，fabs函数用于求绝对值。原因：浮点数在内存中是以近似值存储的，所以不能执行是否相等的比较。

输入与输出要求：
输入3个浮点数，代表a，b，c。输出对应方程的根：
当该方程非一元二次方程时，输出“The equation is not quadratic.”。
当该一元二次方程有两个相等的实数根时，输出“The equation has two equal roots: xx.”。
当该一元二次方程有两个不相等的实数根时，输出“The equation has two distinct real roots: x1 and x2.”。
当该一元二次方程有两个不相等的虚数根时，输出“The equation has two complex roots: x1 and x2.”。
所有的实数均保留4位有效数字。

注意：1、运算中用到的所有数据要求用float型存储。
2、当有两个不同的根时，解为实数时先输出大的那个根，解为复数时先输出虚部为正的那个根。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a,b,c;
    float d;
    float sd;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    d=b*b-4*a*c;
    sd=sqrtf(fabsf(d));
    //a=0
    if (fabsf(a)<=1e-6){
        printf("The equation is not quadratic.");
    }
    else if (fabsf(b)<=1e-6&&fabsf(c)<=1e-6){
        printf("The equation has two equal roots: 0.0000");
    }
    else{
        a=fabs(a);
        if (fabsf(d)<=1e-6) {
            printf("The equation has two equal roots: %.4f.", -b/(2*a));
        }
        else if (d>1e-6) {
            printf("The equation has two distinct real roots: %.4f and %.4f.", (-b+sd)/(2.0*a),
                   (-b-sd) / (2.0*a));
        }
        else if (d<1e-6) {
            if (fabsf(b)<=1e-6) {
                printf("The equation has two complex roots: %.4fi and %.4fi.", sd/(2.0*a), -sd/(2.0*a));
            }
            else {
                printf("The equation has two complex roots: %.4f+%.4fi and %.4f%.4fi.", (-b)/(2.0*a),sd/(2.0*a), (-b)/(2.0*a), -sd/(2.0*a));
            }
        }
    }
    return 0;
}