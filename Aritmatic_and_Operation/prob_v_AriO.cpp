#include <stdio.h>

int main (){
	int T;
	double C;
	double K;
	double R;
	double F;
	scanf("%d", &T);
	if (T == 3){
		for (int i=0;i<T;i++){
		scanf("%lf", &C);
		R = (4*C/5);
		F = (9*C/5)+32;
		K = C + 273;
		printf("%.2lf %.2lf %.2lf\n", R, F, K);
		}
	}
	return 0;
}
