/*
题目描述
有一堆小球，被分别放到n个桶里，如果每个桶里的小球的个数相等，则剩一个小球。
此时如果把其中一个桶里的小球再按同样的规则放到n个桶里，发现还是剩一个小球。
如果按照此种方式能做m次，则小球的数量最少是多少？

输入：为两个用空格分隔的整数n(1<n)，m(0<m)。
输出：为一个整数，代表最少小球有多少个。

输入样例
4 4
输出样例
341
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	int temp=1; 
	scanf("%d %d",&a,&b);
	int res=0;
	int i;
	for(i=0;i<b;i++){
		res=temp*a+1;
		temp=res;
	} 
	printf("%d",res); 
	return 0;
} 