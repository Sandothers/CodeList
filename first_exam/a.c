#include <stdio.h>
#include <stdlib.h>

int main(){
	double a,b,c,d;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	if(b*c-d<=0.0001&&b*c-d>=-0.0001){
		printf("error");
	}
	else{
		printf("%.1f",a/(b*c-d));
	}
	
	return 0;
}