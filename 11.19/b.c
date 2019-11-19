/*
问题描述：
任意给定一个字符串，字符串中包含除了空格、换行符之外的任意字符。你的任务是检测字符串中的小括号是否配对，即“(”与“)”是否配对。
如字符串“(（a+b）(c+d))”中小括号是配对的，而“((a+b))c+d))”则不配对。

输入与输出要求：
输入一个长度不超过100的非空字符串，该字符串中不会出现空格、换行符。输出检测结果。

程序运行效果：
Sample 1:
((a+b)*(c+d)) ↙
parentheses match!↙

Sample 2:
((a+b)*)c+d)) ↙
parentheses do not match!↙
*/
#include <stdlib.h>
#include <stdio.h>
int main(){
    char tmp;
    int mark;
    int judge=0;
    int jump=0;
    char string[100];
    for(int i=0;jump!=100;){
        scanf("%c",&tmp);
        if(tmp=='\n'){
            mark=i-1;
            jump=100;
        }    
        if(tmp=='('||tmp==')'){
            string[i]=tmp;
            if(i>0&&string[i-1]=='('&&string[i]==')'){
                string[i-1]='0';
                string[i]='0';
                i=i-1;
            }
            else i=i+1;
        }
    }
    for(int i=0;i<=mark;i++){
        if(string[mark]!='0') judge=1;
    }
    if(judge==1) printf("parentheses do not match!");
    else printf("parentheses match!");
    return 0;
}