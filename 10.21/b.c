/*
问题描述：
你的任务是实现带小数的二进制数到十进制数的转换。二进制字符序列以字符“#”结尾，如“1011.101#”。将二进制数“1011.101”转换为十进制数的过程如下：
(1101.101)_2=1*2^3+0*2^2+1*2^1+1*2^0+1*2^{-1}+0*2^{-2}+1*2^{-3}=(11.625)_{10}(1101.101)
二进制字符序列中只可能存在“0”、 “1”、 “.”、 “#”四种字符，不会出现任何其他字符。为了提高结果的精度，建议使用double类型的变量存储结果。

输入与输出要求：
输入一个以“#”结尾的字符序列，代表待转换的二进制数。输出转换后的十进制数，如果二进制数有小数部分，则输出结果保留6位有效数字；如果二进制数没有小数部分，则输出结果中没有小数点和小数部分。

程序运行效果：
Sample 1：
11001.0110#↙
25.375000↙
Sample 2：
1101#↙
13↙
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char a,b;
    double sum = 0;
    double flag = 0;
    double i = -1;
    while((a = getchar()) != '#'){
        if(a != '.'){
          sum = sum * 2 + (int)(a-'0');
        }
        else{
            flag = 1;
            break;
        }
    }
    while(flag == 1 && (b = getchar()) != '#'){
        sum = sum + pow(2,i) * (int) (b-'0');
        i=i-1;
    }
    if (flag==1){
        printf("%.6lf",sum);
    }
    else{
        printf("%d",(int) sum);
    }
    return 0;
}
