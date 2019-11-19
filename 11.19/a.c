//题目见同名图片
#include <stdio.h>
#include <stdlib.h>
int judge(){
    int tmp=0;
    char enter;
    int poly[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char table[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    char number[18];
    for(int i=0;i<18;){
        scanf("%c",&enter);
        if(enter!='\n'){
            number[i]=enter;
            if(i!=17) tmp=tmp+(number[i]-'0')*poly[i];
            i=i+1;
        }
    }
    tmp=tmp%11;
    char tobejudged=number[17];
    if(tobejudged==table[tmp]) return 1;
    else return 0;
}
int main(){
    int a;
    int mark;
    scanf("%d",&a);
    int list[a];
    for(int i=0;i<a;i++){
        list[i]=judge();
    }
    for(int i=0;i<a;i++){
        if(list[i]==1) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}