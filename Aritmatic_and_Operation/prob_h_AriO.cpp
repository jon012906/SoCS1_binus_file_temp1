#include <stdio.h>

int main (){
	double a,b,c,d;
	int i;
	for ( i=0;i<3;i++){
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		printf("%.2lf\n", a*2 + b*2 + c*2 + d);
	}
	return 0;

}
