/*
问题描述：
设计函数int judgeTriangle(int a,int b,int c)，判断a、b、c三边是否能构成三角形，如果能，那么进一步判断是属于哪种三角形（等边、等腰、直角、不规则三角形）。这里的a、b、c没有顺序之分。
当a、b、c三边不能构成三角形时，返回-1；当a、b、c三边构成不规则三角形时，返回0；当a、b、c三边构成直角三角形时，返回1；当a、b、c三边构成等腰三角形时，返回2；当a、b、c三边构成等边三角形时，返回3。

输入与输出要求：
输入三个正整数a、b、c，分别代表三角形的三边，输出判断结果。当无法构成三角形时输出“It is not a triangle.”；当构成不规则三角形时输出“It is a scalenous triangle.”；当构成直角三角形时输出“It is a right-angled triangle.”；当构成等腰三角形时输出“It is an isosceles triangle.”；当构成等边三角形时输出“It is a equilateral triangle.”。

程序运行效果：
Sample 1:
13 5 12↙
It is a right-angled triangle.
Sample 2:
5 5 5↙
It is a equilateral triangle.
Sample 3:
8 1 8↙
It is an isosceles triangle.
Sample 4:
1 6 5↙
It is not a triangle.
Sample 5:
3 6 5↙
It is a scalenous triangle.
*/
#include<stdio.h>
#include<stdlib.h>
int judgeTriangle(int a,int b,int c){
    int tmp;
    if (b>a){
        tmp=a;
        a=b;
        b=tmp;
    }
    if (c>a){
        tmp=a;
        a=c;
        c=tmp;
    }
    if (a>=b+c) return -1;
    else if (a*a==b*b+c*c) return 0;
    else if (a==b&b==c) return 2;
    else if (a==b||a==c||b==c) return 1;
    else return 3;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    switch (judgeTriangle(a,b,c)){
        case -1: printf("It is not a triangle.");break;
        case 0: printf("It is a right-angled triangle.");break;
        case 1: printf("It is an isosceles triangle.");break;
        case 2: printf("It is a equilateral triangle.");break;
        case 3: printf("It is a scalenous triangle.");break;
    }
    return 0;
}