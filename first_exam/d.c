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