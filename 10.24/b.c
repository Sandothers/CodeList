/*
问题描述：
某个公司想用电话来传送数据，但又担心被人窃听。数据都是由四位数字组成的整数。为了使数据传送更加安全一些，公司要你编写一个加密数据和解密数据的程序。程序读取一个四位整数，然后按如下规则加密：每位数字都加上7，然后用和除以10的余数取代该数字；再把第1位与第3位交换，第2位与第4位交换。说明：将最高位视作第1位。如整数1234，则第1位是1，第4位是4。

输入与输出要求：
输入两个整数n和f，n代表待加密或解密的整数（0000<=n<=9999），f为标志整数，当f为1时代表将整数n加密，当f为0时代表将整数n解密。输出加密数字或解密数字，加密结果输出为“After encrypting the number is XXXX”， 解密结果输出为“After decrypting the number is XXXX”。

程序运行效果：
Sample 1：
1890 1↙
After encrypting the number is 6785↙
Sample 2：
6785 0↙
After decrypting the number is 1890↙
*/

#include <stdio.h>
#include <stdlib.h>

int turnum(int n){\
    int i;
    if (n>=7){
        i=n-7;
    }
    else i=n+3;
    return i;
}

int decode(int n){
    int i;
    int a,b,c,d;
    int mid1,mid2;
    a=n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;
    a=turnum(a);
    b=turnum(b);
    c=turnum(c);
    d=turnum(d);
    mid1=a;
    a=c;
    c=mid1;
    mid2=b;
    b=d;
    d=mid2;
    printf("After decrypting the number is %d%d%d%d",a,b,c,d);
}
int encode(int n){
    int i;
    int mid1,mid2;
    int a,b,c,d;
    a=n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;
    a=(a+7)%10;
    b=(b+7)%10;
    c=(c+7)%10;
    d=(d+7)%10;
    mid1=a;
    a=c;
    c=mid1;
    mid2=b;
    b=d;
    d=mid2;
    printf("After encrypting the number is %d%d%d%d",a,b,c,d);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (b==1) encode(a);
    if (b==0) decode(a);
    return 0;
}