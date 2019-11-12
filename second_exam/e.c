/*
题目描述
　　如果一个合数由两个质数相乘而得，那么我们就叫它是质数们的直接后代。现在，给你一系列自然数，判断它们是否是质数的直接后代。
输入格式
　　第一行一个正整数T，表示需要判断的自然数数量
　　接下来T行，每行一个要判断的自然数
输出格式
　　共T行，依次对于输入中给出的自然数，判断是否为质数的直接后代，是则输出Yes，否则输出No
数据规模和约定
　　1<=T<=20
　　2<=要判断的自然数<=10^5
输入样例
4
3
4
6
12
输出样例
No
Yes
Yes
No
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int x){
    if (x==2) return 1;
    else{
        for(int i = 2; i < (int)sqrtf(x)+2; i++){
    	    if (x % i == 0) return 0;
        }
    }
    return 1;
}
int dj(int b){
	int c;
    if(b==1||b==0) return 0;
    else{
        for(int j=2;j<=b;j++){
		    c=b/j; 
		    if(isPrime(j)==1&&isPrime(c)==1&&isPrime(b)==0&&c*j==b) {
			    return 1; 
			    break;
		    }
	    }
        return 0; 
    }
} 
int main(){
	int a,b,c;
	scanf("%d",&a);
	int p[a]; 
	for(int i=0;i<a;i++){
		scanf("%d",&b);
		p[i]=dj(b); 
	}
	for(int j=0;j<a;j++){
		if(p[j]==1) printf("Yes\n");
		if(p[j]==0) printf("No\n"); 
	} 
	return 0;
}