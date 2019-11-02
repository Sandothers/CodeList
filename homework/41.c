//输入n个整数，求最大数。
#include <stdio.h>
#include <stdlib.h>
int findMax(int n){
 	int max;
 	int num;
	if(n==1){
	    scanf("%d",&num);
	    return num;
	}
	 else{  
	    max=findMax(n-1);
	    scanf("%d",&num);
	    return num>max?num:max;
   }	    
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",findMax(x));
    return 0;
}