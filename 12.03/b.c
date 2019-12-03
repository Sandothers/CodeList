/*
题目描述
设计函数 char *locatesubstr(char *str1,char *str2)，查找str2指向的字符串在str1指向的字符串中首次出现的位置，返回指向该位置的指针。若str2指向的字符串不包含在str1指向的字符串中，则返回空指针NULL。
注意这里必须使用指针而不是数组下标来访问字符串。
输入与输出要求：输入两个长度不超过500的非空字符串str1和str2，字符串中可能出现空格，以换行符结束。输出str1中返回指针后的所有字符；否则输出“NULL!”。
程序运行效果：

Sample 1:
didjfsd dabcxxxxxx↙
abc↙
abcxxxxxx

Sample 2:
aaaaabcaaa↙
xxx↙
NULL!
*/

#include <stdio.h>
#include <stdlib.h>
char *locatesubstr(char *str1,char *str2){
    char *a;
    
}
int main(){
    char str1[501],str2[501];
    char *a;
    scanf("%s",str1);
    getchar();
    scanf("%s",str2);
    printf("%c",locatesubstr(str1,str2));
    return 0;
}