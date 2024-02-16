#include <stdio.h>
int main (){
	double l,b,h,lp,lsgtg,lpp;
	scanf("%lf %lf %lf", &l, &b, &h);
	lpp = b*l;
	lsgtg = h*b/2;
	lp = lpp*3 + lsgtg*2;
	printf("%.3lf\n", lp);
	return 0;
}
