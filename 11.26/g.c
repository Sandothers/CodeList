/*
问题描述：
任意给定两个字符串str1与str2， str1与str2中可以包含任意字符。你的任务是统计字符串str2在str1中出现的次数。
如字符串str1为“asasasbbbasbas”,str2为“as”，则统计结果为5。注意如果字符串str1为“aaaaa”，字符串str2为“aaa”，则统计结果为3。

输入与输出要求：
输入两个长度不超过100的字符串，以换行符结束。输出统计次数，占一行。

程序运行效果：
dhd dhdhdfg dhd dh zx67 dhd mklodhdh↙
dhd↙
6↙
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char str1[100];
    char str2[100];
    char c;
    int i=0,j=0;
    int mark=0;
    int num=0;
    while((c=getchar())!='\n'){
        str1[i]=c;
        i=i+1;
    }
    while((c=getchar())!='\n'){
        str2[j]=c;
        j=j+1;
    }
    for(int k=0;k<i-j+1;k++){
        for(int l=0;l<j;l++){
            if(str1[k+l]!=str2[l]) mark=1;
        }
        if(mark==0) num++;
        mark=0;
    }
    printf("%d",num);
    return 0;
}