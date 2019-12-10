/*
题目描述
学生的属性包括姓名、学号、5门课程的成绩、平均成绩与总成绩。
已知一个学生的姓名、学号与5门课程的成绩，你的任务是计算该学生的平均成绩与总成绩，并将该学生的5门课程成绩按照从高到底进行排序，
最后将这个同学的完整信息输出。学生的姓名中只能包含大小写字母与空格字符，不会超过20个字符；学生的学号是个长度不会超过20的字符串，只包含数字字符；
课程成绩均为0—100的整数。
要求：
1.在本题中，你要设计一个结构来存储学生的信息。在此结构中，需要有一个字符数组来存储姓名；一个字符数组来存储学号；
一个长度为5的整型数组来存储5门课程的成绩；一个双精度浮点型变量存储平均成绩，一个整型变量存储总成绩。
2.在对结构变量的成员进行赋值与排序的时候，你要使用“结构变量名+‘.’+结构成员名”这种方式访问变量，如“student.score”；
而在输出学生信息时，你要用一个结构指针指向该结构，然后用结构指针访问结构中的变量，即“结构指针名+‘->’+结构成员名”，如“ptr->score”。
输入与输出要求:学生信息的输入按照姓名、学号、5门课程成绩的顺序输入，共占三行。
学生信息的输出：姓名占一行；学号占一行；5门成绩中间用空格分开，最后一个成绩后是换行符，从高到底进行排序，占一行；
平均成绩与总成绩用空格分隔，占一行，平均成绩保留两位小数。输入具体格式见样例。

输入样例
Liu Mengmeng
0821131666666
88 90 93 91 85
输出样例
Name:Liu Mengmeng
ID:0821131666666
Score:93 91 90 88 85
average:89.40 total:447
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
    }stu;
    int mark=0;
    gets(stu.name);
    scanf("%s",&stu.stunum);
    stu.avg=0;
    stu.total=0;
    for(int i=0;i<5;i++){
        scanf("%d",&stu.list[i]);
        stu.total+=stu.list[i];
        stu.avg+=(stu.list[i]/5.0);
    }
    int tmp;
    while(mark==0){
        mark=1;
        for(int j=0;j<4;j++){
            if(stu.list[j]<stu.list[j+1]){
                tmp=stu.list[j];
                stu.list[j]=stu.list[j+1];
                stu.list[j+1]=tmp;
                mark=0;
            }
        }
    }
    printf("Name:");
    puts(stu.name);
    printf("ID:%s\n",stu.stunum);
    printf("Score:%d %d %d %d %d\n",stu.list[0],stu.list[1],stu.list[2],stu.list[3],stu.list[4]);
    printf("average:%.2f total:%d",stu.avg,stu.total);
    return 0;
}