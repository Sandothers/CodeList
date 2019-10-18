/*
题目描述
已知一个整数n，你要根据n打印出n阶的实心菱形。

输入与输出要求：
输入一个整数n(0<n<40,要打印的菱形阶数)。输出n阶实心菱形(占2*n-1行)。


输入样例
样例一：
3

样例二：
6
输出样例
样例一：
  *
 ***
*****
 ***
  *

样例二：
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *

*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int up1,up2,up3;
    int down1,down2,down3;
    scanf("%d",&a);
    for (up1 = 1; up1 <= a; up1++)
    {
        for (up2 = 0; up2 < a-up1; up2++)
        {
            printf(" ");
        }
        for (up3 = 0; up3 < 2*up1-1; up3++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (down1 = 1; down1 <= a-1; down1++)
    {
        for (down2 = 0; down2 < down1; down2++)
        {
            printf(" ");
        }
        for (down3 = 0; down3 < (a-down1)*2-1; down3++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}