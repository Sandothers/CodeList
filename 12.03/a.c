/*
问题描述：
设计函数 void delcharfun(char *str,char ch)实现从字符串str中删除指定的字符ch。同一字母的大、小写按不同字符处理。
输入与输出要求：
输入一个长度不超过100的非空字符串与一个字符，代表需要处理的字符串与需要从字符串中删除的字符。其中字符串中不会出现空格、换行符。输出删除指定字符以后的字符串，占一行。如果删除指定字符后字符串变为空串，则直接输出空行。

输入样例
abcABCabc#
b

输出样例
acABCac#
*/

#include <stdio.h>
#include <stdlib.h>

void delcharfun(char *str,char ch){
    for(int i=0;str[i]!='\0';){
        if(str[i]==ch){
            for(int j=i;str[j]!='\0';j++) str[j]=str[j+1];
        }
        else i=i+1;
    }
}
int main(){
    char word[101];
    char a;
    scanf("%s",word);
    getchar();
    scanf("%c",&a);
    delcharfun(word,a);
    if(word[0]=='\0') printf("\n");
    else printf("%s",word);
    return 0;
}