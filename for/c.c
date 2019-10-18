/*
题目描述
已知一个英文单词，英文单词中只包含大写字母“A—Z”与小写字母“a—z”。你的任务是将英文单词翻译成密码文。翻译规则是把所有字母用它后面的第三个字母替换，并假设字符a接在字符z后面，字符A接在字符Z后面。例如：zero将被翻译成chur。

输入与输出要求：
输入一个英文单词，每个英文单词长度不超过100,单词以回车换行符‘\n’结束输入。输出对应字符串的密码文，占一行。

程序运行效果：
Sample 1：
zero↙
chur
Sample 2：
AZazbf↙
DCdcei
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    char input;
    while (input!='\n') {
        scanf("%c", &input);
        if((input<='z'&&input>='x')||(input<='Z'&&input>='X')){
            input=input-23;
        }
        else if ((input>='a'&&input<='w')||(input>='A'&&input<='W')){
            input=input+3;
        }
        printf("%c",input);
    }
    return 0;
}