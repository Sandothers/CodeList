/*
问题描述：
回文是指正读和反读都一样的数或文本段。例如，12321、55555、45554、11611都是回文数。输入一个长度不超过10位的整数n，判断它是否是回文数。

输入与输出要求：
输入一个整数n，即待判断的数字。当n为回文数时输出“Yes”，否则输出“No”。

程序运行效果：
Sample 1：
12321↙
Yes↙
Sample 2：
126521↙
No↙
*/

#include <stdio.h>
#include <stdlib.h>
long int reverse(long number){
	long temp=0;
	while(number!=0){
	    temp=(temp*10 + number%10);
		number=number/10;
	}
	if(number<0) return (-temp);
	else return temp;
}
int main(){
    long int number;
    scanf("%ld",&number);
    if (number == reverse(number)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}