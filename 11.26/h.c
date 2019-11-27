/*
问题描述：
整数可以按照大小来排序，其实字符串也可进行排序。排序时需要比较字符串大小。字符串比较规则见Problem13中对于strcmp功能的描述。
任意给定n个字符串，字符串中可以包含除换行符之外的任意字符。你的任务是将这n个字符串从小到大进行排序，然后输出。

输入与输出要求：
输入一个不超过200的整数n，代表待排序字符串的个数。然后输入n个字符串，每个字符串长度不会超过100，以换行符结束。
输出排序后的n个字符串，每个字符串占一行。

程序运行效果：
Sample 1:
5↙
bbb↙
zzzzzz↙
aabbbccc↙
aaaaaa↙
abbbbb↙
aaaaaa↙
aabbbccc↙
abbbbb↙
bbb↙
zzzzzz↙

Sample 2:
3↙
abbbbbb↙
abbbbbb↙
aaaa↙
aaaa↙
abbbbbb↙
abbbbbb↙
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n;
    int mark=1;
	char str[201][101];
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++) gets(str[i]);
	char b[210];
	while(mark==1){
        mark=0;
		for(int i=0;i<n-1;i++){
			if(strcmp(str[i],str[i+1])>0){
				strcpy(b,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],b);
                mark=1;
			}
		}
	}
	for(int i=0;i<n;i++) puts(str[i]);
	return 0;
}