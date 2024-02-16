#include <stdio.h>

int main (){
	double a,b,c,d;
	int T;
	scanf("%d",&T);
	if (T==3){
		for (int i=0;i<T;i++){
			scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
			printf("%.2lf\n", a*2 + b*2 + (c/3)*4 + d/2);
		}		
	}
	return 0;
}
