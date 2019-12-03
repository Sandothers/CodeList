/*
题目描述
已知一个总长度不超过10000的字符串，字符串中只包含大写字母“A—Z”、小写字母“a—z”和空格‘ ’。
空格用于分割单词，空格的个数不超过1000个。你的任务是将字符串中用空格分隔的单词打印出来。
你要按照如下要求完成任务：
1.利用指针数组指向每个单词的开始位置。
2.把字符串中单词结束后的空格改为“\0”,然后使用指针数组将每个单词打印出来。
3.不可直接输出或使用二维数组输出单词。
输入与输出要求：输入一个字符串，满足题目描述，占一行。输出这个字符串中的单词，每个单词占一行。
程序运行效果：

Sample 1:
You are great↙
You↙
are↙
great↙
Sample 2:
itisalongword↙
itisalongword↙
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    char word[10001];
    char *pt[1001];
    char *loc;
    gets(word);
    int j=1;
    pt[0]=&word[0];
    for(int i=0;word[i]!='\0';i++){
        if(word[i]==' '){
            pt[j]=&word[i+1];
            word[i]='\0';
            j=j+1;
        }
    }
    for(int k=0;pt[k]!=0;k++){
        for(loc=pt[k];*loc!='\0';loc++){
            printf("%c",*loc);
        }
        printf("\n");
    }
    return 0;
}