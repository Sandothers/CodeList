/*
问题描述：
设计函数int getDays(int year,int month)，根据给定的年year和月份month,计算该月的天数并返回。要注意闰年的判断

输入与输出要求：
输入两个整数y,m，即年份与月份。输出该年内该月的天数，占一行。

程序运行效果：
Sample 1:
1995 7↙
There are 31 days in month 7 year 1995.
Sample 2:
2000 2↙
There are 29 days in month 2 year 2000.
*/
#include <stdio.h>
#include <stdlib.h>
int isRun(int year){
    int y;
    // year = 400;
    // （四年一闰，百年不闰) || 四百年在闰年
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) y=1;
    else y=0;
    return y;
}
int getDays(int year,int month){
    int day=0;
    switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: day=31;break;
    case 4:
    case 6:
    case 9:
    case 11: day=30;break;
    case 2: day=28+isRun(year);
    }
    printf("There are %d days in month %d year %d.",day,month,year);
    return 0;
}
int main(){
    int year,month;
    scanf("%d %d",&year,&month);
    getDays(year, month);
    return 0;
}