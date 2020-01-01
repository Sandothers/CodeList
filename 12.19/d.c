/*
题目描述
世界杯小组赛的32支参赛队分为八个小组，每组四队进行比赛。每支球队都必须和其他三支球队进行且只进行一场比赛，胜者得三分，负者不得分，打平双方各得一分。
每个小组的前两名出线。小组赛出线规则如下：
a、积分高者排名靠前
b、小组中总净胜球高者排名靠前
c、小组中总进球数高者排名靠前
假设依次采用a、b、c三条规则后没有排名相同的队伍，请写出判断各个队伍排名的程序。
输入：4行，每行一个字符串和3个整数，字符串为国家的名字(只包含大小写字母且长度不会超过20)，
3个整数(大于等于0且小于20)依次为该队的总进球数、总失球数和积分。注：总净胜球指的是该队总的进球数减去总的失球数。

要求：
1)通过typedef struct team TEAM语法格式定义存储球队信息的结构体。
2)设计三个函数，如下：
// 函数功能：比较两个队伍的信息，如果p2排名靠前则返回1，否则返回0
//参数p1,p2为指向被比较的两个结构体的指针，返回值为比较结果
int Comp(TEAM *p1,TEAM *p2);

//函数功能：将两个结构体的数据进行交换，即将两支球队的所有数据交换
//参数p1,p2为指向被交换的两个结构体的指针
void Swap(TEAM *p1,TEAM *p2);

//函数功能 依据排名规则降序排列
//参数team为指向待排序数据的指针，n为数组长度
void Sort(TEAM *teams,int n) ;
3)函数Sort中需要调用前两个函数，主函数只能调用Sort进行排序。


输入样例
Brazil 3 7 4
China 10 0 9
Germany 4 7 4
Italy 3 6 4
输出样例
China
Germany
Italy
Brazil
*/

#include <stdio.h>
#include <stdlib.h>

struct team{
    char name[20];
    int win;
    int lose;
    int pureWin;
    int goal;
};
typedef struct team TEAM;

int Comp(TEAM *p1,TEAM *p2){
    if(p1->goal > p2->goal){
        return 0;
    }
    else if(p1->goal < p2->goal){
        return 1;
    }
    else{
        if(p1->pureWin > p2->pureWin){
            return 0;
        }
        else if(p1->pureWin < p2->pureWin){
            return 1;
        }
        else {
            if(p1->win > p2->win){
                return 0;
            }
            else if(p1->win < p2->win){
                return 1;
            }
            else return 0;
        }
    }
    return 0;
}

void Swap(TEAM *p1,TEAM *p2){
    TEAM tmp;
    tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}

void Sort(TEAM **teams,int n){
    int mark=0;
    while(mark==0){
        mark=1;
        for(int i=0;i<n-1;i++){
            if(Comp(teams[i],teams[i+1])==1){
                mark=0;
                Swap(teams[i],teams[i+1]);
            }
        }
    }
}

int main() {
    TEAM **list;
    list = (TEAM**)malloc(sizeof(TEAM*)*4);
    for(int i=0;i<4;i++){
        list[i]=(TEAM*)malloc(sizeof(TEAM));
        scanf("%s %d %d %d",list[i]->name,&list[i]->win,&list[i]->lose,&list[i]->goal);
        list[i]->pureWin = list[i]->win - list[i]->lose;
    }
    Sort(list,4);
    for(int k=0;k<4;k++){
        printf("%s\n",list[k]->name);
    }
    return 0;
}