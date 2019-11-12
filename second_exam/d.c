/*
题目描述
78这个数可以表示为连续正整数的和，1+2+3+4+5+6+7+8+9+10+11+12，18+19+20+21，25+26+27。
输入一个正整数 n(<=10000)，输出 m 行(n有m种表示法)，每行是两个正整数a，b，表示a+(a+1)+…+b=n。
对于多种表示法，a小的方案先输出。测试用例保证至少有一种方案。

输入样例
78
输出样例
1 12
18 21
25 27
*/
#include <stdlib.h>
int run(int a,int n){
	int t=0;
	int temp=a; 
	for(a;a<n;a++){
		t=t+a;
		if(t==n){
			printf("%d %d\n",temp,a);
			break; 
		} 
	}
} 
int main(){
	int n;
	int i=1; 
	scanf("%d",&n); 
	for(i;i<n;){
		run(i,n); 
		i=i+1; 
	}
	return 0;
}