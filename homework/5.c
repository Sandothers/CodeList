#include <stdio.h>
#include <stdlib.h>

int findMax(int preNum){
    int max, curr_num;
    scanf("%d",& curr_num);
    if (curr_num ==-1) return  preNum;
    else{
        max=findMax (curr_num);
        return (preNum > max? preNum :max);
   }
}
int main(){
    int x;
    printf("%d",findMax(x));
}
