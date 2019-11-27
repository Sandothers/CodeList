/*
问题描述：
某公司有四个销售员(代号1—4)，负责销售五种产品(代号1—5)。每个销售员都把当天售出的每种产品各写一张便条交上来。
每张便条包含销售员的代号、产品的代号、这种产品的销售额。我们搜集到了每个月的所有便条，你的任务是根据这些便条，计算出每人、每种产品的总销售额。
处理完销售信息后，以表格形式打印出结果。用列代表销售员，行代表产品。每种产品的销售总额输出到该行的最右边，每个销售员的销售总额输出到该列的最下边。

输入与输出要求：
输入一个整数n，代表便条的数量，然后是n组便条的内容，每组内容包括两个整数和一个浮点数，即销售员的代号、产品的代号、这种产品的销售额。
输出信息处理后的矩阵，矩阵占6行，5列，矩阵元素保留一位小数。每行的每个元素用tab分隔，注意每行最后一个数的后面为换行符。输出格式细节见样例。
特别提醒：1、输出只包含数据，不包含列表的行和列的说明，即saler1、prod1等内容。2、存储浮点数数据的二维数组用 float类型
程序运行效果：
Sample 1：
4↙
1 1 35.6↙
1 2 23.1↙
1 1 89.3↙
4 5 22.6↙

        saler1  saler2  saler3  saler4  total
prod1   124.9   0.0     0.0     0.0     124.9
prod2   23.1    0.0     0.0     0.0     23.1
prod3   0.0     0.0     0.0     0.0     0.0
prod4   0.0     0.0     0.0     0.0     0.0
prod5   0.0     0.0     0.0     22.6    22.6
total   148.0   0.0     0.0     22.6    170.6
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int saler,prod;
    float salenum;
    scanf("%d",&n);
    float table[6][5];
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            table[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        scanf("%d %d %f",&saler,&prod,&salenum);
        table[prod-1][saler-1]=table[prod-1][saler-1]+salenum;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            table[i][4]=table[i][j]+table[i][4];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            table[5][i]=table[j][i]+table[5][i];
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            printf("%.1f",table[i][j]);
            if(j==4) printf("\n");
            else printf("\t");
        }
    }
    return 0;
}