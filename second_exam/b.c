/*
题目描述
将数字1，2，3，4，5，6分成两组，组成两个三位数x,y，试输出所有满足x + y = n 的三位数。

输入：为一个整数n。
输出：若干行，每行均为两个用空格分隔的整数，依次代表x和y。同一行中，较小的数先输出，多组数据输出的顺序为x小的先输出。需要注意的是，输出样例中 134 + 265 = 399，显然 265 + 134也等于399，这种情况我们认为是同一种情况，所以只输出一次。
测试用例保证输入合法且至少有一组满足条件的数。

输入样例
399
输出样例
134 265
135 264
143 256
146 253
153 246
156 243
164 235
165 234
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	int y; 
	int a,b,c;
	int d,e,f; 
	scanf("%d",&x); 
	for(int i=123;i<(x/2+1);i++){
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(a!=b&&a!=c&&b!=c&&a>=1&&a<=6&&b>=1&&b<=6&&c>=1&&c<=6){
			y=x-i;
			d=y/100;
			e=(y/10)%10;
			f=y%10;
			if(d!=e&&d!=f&&e!=f&&d>=1&&d<=6&&e>=1&&e<=6&&f>=1&&f<=6){
				if(a!=d&&a!=e&&a!=f&&b!=d&&b!=e&&b!=f&&c!=d&&c!=e&&c!=f){
					if(i<y) printf("%d %d\n",i,y);
				}
			}
		}
	} 	 
	return 0;
}