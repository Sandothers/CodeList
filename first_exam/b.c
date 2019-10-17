#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int sum=0;
	int a,b;
	int i;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d %d",&a,&b);
		if(a==b){
			sum=sum+1;
		}
		else if(a>b){
			sum=sum+3;
		}
		else{
			sum=sum+0;
		}
	}
	printf("%d",sum);
	return 0;
}