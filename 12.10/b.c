/*
题目描述
已知正整数n，n的范围不确定。从键盘读入n个字符串，每个字符串的长度小于1000，要保存到动态数组中。
为了能访问到所有的字符串，需要建立一个长度为n的动态指针数组，用于保存n个字符数组的内存地址。
在读入每个字符串时，用一个长度为1000的字符数组作为缓冲数组，将字符串读入并求出长度后，再动态分配空间，
将缓冲数组中的字符串复制到新分配的动态空间中，并将动态空间的首地址保存到指针数组中。
读完n个字符串后你要将这n个字符串按照ASCII码顺序升序排序，然后再打印到屏幕上。
字符串中可能包含大小写字母“A-Z”、“a—z”与空格字符。每个字符串以换行符结束输入。
输入与输出要求：输入一个正整数n，代表待排序字符串的个数。然后输入n个字符串，每个字符串至少包含一个字符，占一行。
输出排序后的n个字符串，每个字符串占一行。

程序运行效果：
Sample 1:
10↙
Bb b↙
zzz zzz↙
aab bbccc↙
aaabbaaa↙
abb bbb↙
ccidfjD↙
Aidj idj↙
Ccidf jD↙
sidfjijE EE↙
kkkkkk↙
Aidj idj
Bb b
Ccidf jD
aaabbaaa
aab bbccc
abb bbb
ccidfjD
kkkkkk
sidfjijE EE
zzz zzz
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int mark=0;
    int n;
    int length;
    scanf("%d",&n);
    char **ptr;
    ptr=(char**)malloc(sizeof(char*)*n);
    char buff[1001];
    char *addr;
    getchar();
    for(int i=0;i<n;i++){
        gets(buff);
        length=strlen(buff);
        ptr[i]=(char *)malloc(sizeof(char)*(length+1));
        strcpy(ptr[i],buff);
    }
    while(mark==0){
        mark=1;
        for(int i=0;i<n-1;i++){
            if(strcmp(ptr[i],ptr[i+1])>0){
                mark=0;
                addr=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=addr;
            }
        }
    }
    for(int i=0;i<n;i++) puts(ptr[i]);
    for(int i=0;i<n;i++) free(ptr[i]);
    free(ptr);
    return 0;
}