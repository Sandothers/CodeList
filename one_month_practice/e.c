/*
题目描述
问题描述：小明是是个电视迷，他喜欢看的电视节目有：新闻联播、超级女生、今日说法、中国好声音等等。尽管他很喜欢看电视，但是电视节目分布在一天的各个时间段里，它们之间也有重叠。如果给了你电视节目的时间安排表，你能让小明在一天得时间里尽量多的收看完整的电视节目吗？

输入与输出要求：输入一个整数表示一天电视节目的数量，之后输入的整数两两一对表示每个节目开始和结束的时间（24小时制，只用正整数表示） 。
输出一天可以收看完整节目的最大数量K

输入样例
8 0 1 3 8 2 5 5 9 10 17 12 13 14 15 19 24
输出样例
6
*/
#include <stdio.h>
#include <stdlib.h>
int compare(int x,int list[]){
    
}
int main(){
    int nums;
    int endnode,beginode;
    int tl;//起始节目位置
    scanf("%d",&nums);
    int begin[nums];
    int end[nums];
    int time[nums];
    for (int i = 0; i < nums; i++){
        scanf("%d %d",&begin[i],&end[i]);
        time[i]=end[i]-begin[i];
    }

    for (int t=0;t<=24;t++){
        for (int j = 0; j < nums; j++){
            if (begin[j]==t){
                tl=j;
            }
        }
    }
    for (int j = 0; j < nums; j++){
        if (end[j]<=end[tl]){
                tl=j;
            }
    }

    return 0;
}