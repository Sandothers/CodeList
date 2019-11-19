/*
问题描述：
任意给定一个字符串，字符串中包含除了空格、换行符之外的的任意字符。你的任务是统计出现在该字符串中的各字母（即“A—Z”，“a—z”）的个数(区分大小写)。

输入与输出要求：
输入一个长度不超过100的非空字符串。字符串中不会出现空格、换行符。输出字符串中出现的字母的统计信息，每个字母的统计信息占一行，按照字母的ASCII码的顺序输出。

程序运行效果：
AAAsdf&^%DF879as↙
The character A has presented 3 times.↙
The character D has presented 1 times.↙
The character F has presented 1 times.↙
The character a has presented 1 times.↙
The character d has presented 1 times.↙
The character f has presented 1 times.↙
The character s has presented 2 times.↙
注意单词“time”不论单复数，一律输出复数形式“times”。
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    char tmp;
    int numA[26],numa[26];
    int line;
    for(int i=0;i<26;i++){
        numA[i]=0;
        numa[i]=0;
    }
    while((tmp=getchar())!='\n'){
        if((tmp>='a'&&tmp<='z')||(tmp>='A'&&tmp<='Z')){
            //printf("%c",tmp);
            if(tmp>='a'&&tmp<='z') line=0;
            else line=1;
            if(line==0)  numa[tmp-'a']++;
            else numA[tmp-'A']++;
        }
    }
    for(int i=0;i<26;i++){
        if(numA[i]!=0) printf("The character %c has presented %d times.\n",'A'+i,numA[i]);
    }
    for(int i=0;i<26;i++){
        if(numa[i]!=0) printf("The character %c has presented %d times.\n",'a'+i,numa[i]);
    }
    return 0;
}