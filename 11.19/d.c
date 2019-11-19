/*
问题描述：
任意给定一个字符串，与两个编码表，要求对该字符串进行加密。字符串中只包含大写字母与小写字母。
编码表是字母表的一个重新排列，第一个编码表为大写字母编码表，第二个编码表为小写字母编码表。
例如：
字母表为：
(大写字母表:ABCDEFGHIJKLMNOPQRSTUVWXYZ)
(小写字母表:abcdefghijklmnopqrstuvwxyz)
编码表为：
(大写字母编码表： JKLMQRYZABCISTNOPDGHXEFUVW)
(小写字母编码表： bcljakfxpdqweozrsthiymnguv)
编码表的功能是根据字母在字母表中的序号，把该字母替换成编码表中相应序号上的字母。
例如，字母‘A’在字母表中序号为1，而大写字母编码表中序号为1的是字母‘J’，因此‘A’被编码为‘J’，而字符串“ACDza”将编码为“JLMvb”。
字符串加密过程：
首先把待加密字符串中所有的字母改写成该字母的下一个字母，字母如果为‘Z’或‘z’则分别改写成字母‘A’或‘a’。然后将新得到的字符串根据两个编码表进行编码。
编码后的字符串即为结果字符串。

输入与输出要求：
输入三个字符串,第一个字符串为非空的待加密的字符串，长度不大于100，该字符串中只可能出现大写字母与小写字母。
第二个字符串为大写字母编码表，即26个大写字母，每个大写字母只能出现一次。第三个字符串为小写字母编码表，即26个小写字母，每个小写字母只能出现一次。
输出结果字符串，占一行。

程序运行效果：
IlovelanguageC↙
OPDGHSTABNRYZCQJKLMIXEFUVW↙
hpzaeongxrbcljwtskfymdqiuv↙
NltqolpwgdpgoG↙
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    char alphA[26],alpha[26];
    char out[100];
    char in[100];
    int i=0;
    char tmp;
    while((tmp=getchar())!='\n'){
        if(tmp=='Z') tmp='A';
        else if(tmp=='z') tmp='a';
        else tmp=tmp+1;
        in[i]=tmp;
        i=i+1;
    }
    i--;
    for(int j=0;j<26;j++){
        alphA[j]=getchar();
    }
    getchar();
    for(int j=0;j<26;j++){
        alpha[j]=getchar();
    }
    for(int j=0;j<=i;j++){
        if(in[j]>='a'&&in[j]<='z') out[j]=alpha[in[j]-'a'];
        else if(in[j]>='A'&&in[j]<='Z') out[j]=alphA[in[j]-'A'];
        printf("%c",out[j]);
    }
    return 0;
}