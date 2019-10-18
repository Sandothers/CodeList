/*
题目描述
问题描述：可逆素数是指正序读和反序读都是素数的数。已知正整数a、b满足a<=b。你的任务是求出区间[a,b]内，所有的可逆素数。
输入与输出要求：输入两个正整数a、b，代表所求区间，满足1<=a<=b<=100000。输出满足条件的整数，当该区间没有符合条件的整数时，输出“There is no proper number in the interval.”

输入样例
200 500↙
311 313 337 347 353 359 373 383 389
输出样例
200 300↙
There is no proper number in the interval.
*/
#include <stdio.h>
#include <stdlib.h>
long isPrime(long x){
    for(int i = 2; i < x; i++){
        if (x % i == 0) return 0;
    }
    if (x==1) return 0;
    else return 1;
}
long reverse(long number){
	long temp=0;
	while(number!=0){
	    temp=(temp*10 + number%10);
		number=number/10;
	}
	if(number<0) return (-temp);
	else return temp;
}
int main(){
    int sum=0;
    int a,b;
    int t=0;
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        if (isPrime(reverse(i))==1&&isPrime(i)==1){
            printf("%d ",i);
            t=t+1;
        }
    }
    if (t==0){
        printf("There is no proper number in the interval.");
    } 
    return 0;
}