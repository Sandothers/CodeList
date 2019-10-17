#include <stdio.h>
int main() {
    int input;
    int counter;
    int round;
    int max=0;
    int min=0;
    int i=0;
    int j=0;
    scanf("%d",&round);
    int t[round];
    int maxlist[round];
    int minlist[round];
    for (i; i < round; ++i) {
        counter=0;
        do{
            scanf("%d", &input);
            counter=counter+1;
            if (input!=-1){
                if (counter==1){
                    min=input;
                    max=input;
                }
                if(input>=max){
                    max=input;
                }
                if(input<=min){
                    min=input;
                }
            }
        }while (input!=-1);
        if ((max-min)%3==0&&max!=0&&min!=0){
            minlist[i]=min;
            maxlist[i]=max;
            t[i]=1;
        }
        min=0;
        max=0;
    }
    for (j = 0; j < round; ++j) {
        if (((maxlist[j]-minlist[j])%3==0)&&maxlist[j]!=0&&minlist[j]!=0&&t[j]==1){
            printf("%d %d\n",maxlist[j],minlist[j]);
        }
    }
    return 0;
}