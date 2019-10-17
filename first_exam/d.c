/*
题目描述
乒乓球比赛规则规定在一局比赛中，先得11分的一方为胜方，10平后，先多得2分的一方为胜方。也就是说十分后一定要领先2分，才算胜方，比如11:10不行，要继续比赛直到一方获胜。现请你写一段程序来判断一局比赛的胜负。

输入：只有一行，为用空格分隔的两个整数m,n(0<=m,n<=200)，依次代表A选手和B选手的得分。

输出：
只有一行，如果A获胜则输出A win，如果B获胜则输出B win，如果无法判断胜负（比如7:8)，则输出no result，如果出现不可能出现的比分（比如13:5），则输出error。


输入样例
11 5
输出样例
A win
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>=0&&b>=0){
		if(a==b){
				printf("no result");
			}
		else if(a>=11||b>=11){
			if(b<10&&a==11){
				printf("A win");
			}
			else if(a<10&&b==11){
				printf("B win");
			}
			else if(a>=11&&a-b<2&&a>b){
				printf("no result");
			}
			else if(b>=11&&b-a<2&&b>a){
				printf("no result");
			}
			else if(a>=11&&a-b==2){
				printf("A win");
			}
			else if(b>=11&&b-a==2){
				printf("B win");
			}
				else printf("error");
		}
		else printf("no result");
	}
	else printf("error");
	return 0;
}