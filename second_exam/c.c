/*
题目描述
请写一段程序将13进制数转换为10进制。

输入：为一个只包含大写字母的字符串（其中A代表13进制的0，B代表13进制的1，以此类推直到M代表13进制的12）,字符串以’\n’结束。
输出：是一个整数，转换后的10进制数。测试用例保证合法，且转换后的整数可以用int存储。

输入样例
CBA
输出样例
351
*/
#include <stdio.h>
#include <stdlib.h>
int run(int a,int n){
	int t=0;
	int temp=a; 
	for(a;a<n;a++){
		t=t+a;
		if(t==n){
			printf("%d %d\n",temp,a);
			t=0;
		} 
	}
} 
int main(){
	int n;
	int t=0; 
	int a,b;
	int i=1; 
	int j=1; 
	scanf("%d",&n); 
	for(i;i<n;i++){
		run(i,n); 
	} 
	return 0;
} 