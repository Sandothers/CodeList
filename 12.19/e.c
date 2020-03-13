/*
题目描述
创建学生信息管理系统，具体要求如下：
学生信息包括：学号 姓名 数学成绩 英语成绩 计算机成绩
功能1：添加学生信息
执行1时，输入学号，姓名，三门科目成绩；如果添加学生成功则输出“Add success”，如果学生已存在则输出“Students already exist”
功能2：删除学生信息
执行2时，输入学号信息；如果学生不存在，输出“Students do not exist”，如果存在，则输出“Delete success”
功能3：更改学生成绩信息
执行3时，输入学号信息；如果学生不存在，输出“Students do not exist”，如果存在，输出“Update success”
功能4：显示学生平均分成绩
执行4时，输入学号信息；如果学生不存在，输出“Students do not exist”，如果存在，则输出学生信息，如下格式：
Student ID:2019989890
Name:Jerry
Average Score:89.3
其中平均分为三门科目相加除以3，保留一位小数，每行之间换行。

输入：第一行为一个整数n(0<n<130)，后边共n行，每一行表示执行一种功能。其中1，2，3，4分别对应执行上面4种功能，具体格式见输入样例。
测试用例保证：学号和名字均为长度不超过10的字符串，各门课成绩为0到100之间的整数。
输出：依据各功能要求输出。具体见输出样例。

输入样例
8
1 201817123 Tom 89 80 76
1 2019989890 Jerry 78 99 67
4 201817123
2 201817123
4 201817123
4 2019989890
3 2019989890 79 90 99
4 2019989890
输出样例
Add success
Add success 
Student ID:201817123
Name:Tom
Average Score:81.7
Delete success 
Students do not exist
Student ID:2019989890
Name:Jerry
Average Score:81.3
Update success
Student ID:2019989890
Name:Jerry
Average Score:89.3
*/

#include <stdio.h>
#include <stdlib.h>

struct student{
        char stuno[10];
        char stuname[10];
        int math;
        int english;
        int computer;
    };
typedef struct student Student;

void operation(int num,int n,Student **list){
    int i=0;
    int pos=0;
    Student tmp;
    if(num==1){
        scanf("%s %s %d %d %d",tmp.stuno,tmp.stuname,&tmp.math,&tmp.english,&tmp.computer);
        if(!isRepeat(tmp.stuno,list,n)){
            for(i=0;i<n;i++){
                if(list[i]!=NULL){ 
                    *list[i]=tmp;
                    break;
                }
            }
        }
    }
    else if(num==2){
        scanf("%s",tmp.stuno);
        pos=isRepeat(tmp.stuno,list,n);
        if(pos!=0){
           list[pos]=NULL;
           printf("Delete success\n");
        }
        else{
            printf("Students do not exist\n");
        }
    }
    else if(num==3){

    }
    else if (num==4){
        
    }
}

int isRepeat(char* word,Student **list,int n){
    int mark=0;
    for(int i=0;i>n;i++){
        if(word==list[i]->stuno){
            mark=i;
        }
    }
    return mark;
}

// int insert(Student **list,Student stu,int ){
//     int pos;

//     return pos;
// }
int main(){
    
    int n;
    scanf("%d",&n);
    Student **list=(Student**)malloc((sizeof(Student*)*n));


    return 0;
}