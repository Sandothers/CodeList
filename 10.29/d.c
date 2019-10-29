/*
问题描述：
设计函数int reverseNum(int n)，返回正整数n反转后的形式，如reverseNum(12345)的值为54321。

输入与输出要求：
输入一个正整数n，n的取值范围不会超过int类型变量，n不会有前导0，n的结尾也不会有0。输出该正整数的反转形式，输出如“The reverse form of number 12345 is 54321.”，占一行。

程序运行效果：
Sample 1:
12345↙
The reverse form of number 12345 is 54321.
Sample 2:
88776↙
The reverse form of number 88776 is 67788.
*/
#include <stdio.h>
#include <stdlib.h>
int reverseNum(int number){
	int temp=0;
	while(number!=0){
	    temp=(temp*10 + number%10);
		number=number/10;
	}
	if(number<0) return (-temp);
	else return temp;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("The reverse form of number %d is %d.",num,reverseNum(num));
    return 0;
}