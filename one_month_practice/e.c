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
int main(){
    int n;
    int t;
    int i,j;
    int num = 0;
    scanf("%d", &n);
    int begin[n];
    int end[n];
    int s1[n];
    for (int k = 0; k < n; k++){
        s1[k] = 0;
    }
    int s[n];
    for(i = 0; i < n; i++){
        scanf("%d %d", &begin[i], &end[i]);
        s[i] = i + 1;
    }
    /*先对输入时间进行排序，考虑结尾的影响效果，先对结尾进行比较*/
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(end[j] > end[j + 1]){
                //交换两个时间段
                t = begin[j];
                begin[j] = begin[j + 1];
                begin[j + 1] = t;
                t = end[j];
                end[j] = end[j + 1];
                end[j + 1] = t;
                //交换对应时间段的位置数
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
            else if(end[j] == end[j + 1]){//结尾相同的情况下查看开头位置
                if(begin[j] > begin[j + 1]){
                    //交换两个时间段
                    t = begin[j];
                    begin[j] = begin[j + 1];
                    begin[j + 1] = t;
                    t = end[j];
                    end[j] = end[j + 1];
                    end[j + 1] = t;
                    //交换对应时间段的位置数
                    t = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = t;
                }
            }
        }
    }
    int ed = 0;
    i = 0;
    while(i < n){
        if(begin[i] >= ed){
            s1[i] = 1;
            ed = end[i];
        }
        i = i+1;
    }
    for(i = 0; i < n; i++){
        if(s1[i] == 1){
            num = num+1;
        }
    }
    printf("%d",num);
    return 0;
}
