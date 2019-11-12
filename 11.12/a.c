/*
题目描述
已知某个学生n门课的成绩,求平均成绩。
输入与输出要求：首先输入一个整数n，代表课程数，n不会超过100。然后输入n个整数，代表该学生的n门课成绩,每门成绩的取值范围是0-100。
这n个成绩必须使用数组存储。输出该同学的平均成绩，保留两位小数，占一行。为了提高精度，求出的平均成绩建议使用double类型存储。
程序运行效果：
Sample 1：
5↙
80 75 67 90 97↙
81.80
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    double avg=0;
    double step;
    scanf("%d",&n);
    int point[n];
    for(int i=0;i<n;i++){
        scanf("%d",&point[i]);
        step=point[i]*1.0/n;
        avg=avg+step;
    }
    printf("%.2lf",avg);
    return 0;
}