/*
题目描述
将百分制成绩score按下列原则划分其等级：score≥90等级为A；80 ≤score<90，等级为B；70≤score<80，等级为C；60≤score<70,等级为D；score<60,等级为E。当成绩小于0或大于100时，则输出“The score is out of range!”。

输入与输出要求：
输入一个整数n，即学生成绩。输出成绩n对应的等级，占一行。

程序运行效果：
Sample 1：
89↙
B
Sample 2：
120↙
The score is out of range!
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int score;
    scanf("%d",&score);
    if (score<0||score>100){
        printf("The score is out of range!");
    }
    else if (score>=90){
        printf("A");
    }
    else if (score>=80){
        printf("B");
    }
    else if (score>=70){
        printf("C");
    }
    else if (score>=60){
        printf("D");
    }
    else if (score<60){
        printf("E");
    }
    return 0;
}