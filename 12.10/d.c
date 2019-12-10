/*
题目描述
有n名学生，每个学生的信息包括姓名、学号、5门课程的成绩，平均成绩与总成绩。已知学生的姓名、学号与5门课程的成绩，
你的任务是计算每个学生的平均成绩与总成绩，并将它们输出。学生的姓名中只能包含大小写字母与空格字符，不会超过20个字符；
学生的学号是个长度不会超过20的字符串，只包含数字字符；课程成绩均为0—100的整数。
要求：在本题中，你要设计一个结构来存储一个学生的信息。
在此结构中，需要有一个字符数组来存储姓名；一个字符数组来存储学号；一个长度为5的整型数组来存储5门课程的成绩；
一个双精度浮点型变量存储平均成绩，一个整型变量存储总成绩。然后，你要设计一个结构数组来存储n名学生的信息。
输入与输出要求：输入首先是一个正整数n，代表学生的数量，1<=n<=100；每名学生的信息按照姓名、学号、5门课程成绩的顺序输入，共占三行。 
输出n名学生的信息：姓名占一行；学号占一行；5门课程成绩中间用空格分开，最后一个成绩后是换行符，占一行；
平均与总成绩用空格分隔，占一行，平均成绩保留两位小数；每名同学的信息后都再输出一个空行。输入具体格式见样例。

程序运行效果：
4↙
小王同学↙
0821131699999↙
87 98 79 90 68↙
Liu Mengmeng↙
0821131666666↙
88 90 93 91 85↙
Albert Einstein↙
0821131477777↙
75 87 100 66 64↙
Bill Gates↙
0821131588888↙
65 58 77 60 61↙

Name:小王同学
ID:0821131699999
Score:87 98 79 90 68
average:84.40 total:422

Name:Liu Mengmeng
ID:0821131666666
Score:88 90 93 91 85
average:89.40 total:447

Name:Albert Einstein
ID:0821131477777
Score:75 87 100 66 64
average:78.40 total:392

Name:Bill Gates
ID:0821131588888
Score:65 58 77 60 61
average:64.20 total:321
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    struct student{
        char name[21];
        char stunum[21];
        int list[5];
        double avg;
        int total;
    };
    int n;
    scanf("%d",&n);
    struct student member[n];
    for(int j=0;j<n;j++){
        getchar();
        member[j].avg=0;
        member[j].total=0;
        gets(member[j].name);
        scanf("%s",&member[j].stunum);
        member[j].avg=0;
        member[j].total=0;
        for(int i=0;i<5;i++){
            scanf("%d",&member[j].list[i]);
            member[j].total+=member[j].list[i];
            member[j].avg+=(member[j].list[i]/5.0);
        }
    }
    for(int k=0;k<n;k++){
        printf("Name:");
        puts(member[k].name);
        printf("ID:%s\n",member[k].stunum);
        printf("Score:%d %d %d %d %d\n",member[k].list[0],member[k].list[1],member[k].list[2],member[k].list[3],member[k].list[4]);
        printf("average:%.2f total:%d\n",member[k].avg,member[k].total);
        if(k!=n-1) printf("\n");
    }
    return 0;
}