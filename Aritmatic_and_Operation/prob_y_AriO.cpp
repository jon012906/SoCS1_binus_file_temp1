#include <stdio.h>
int main (){
	int T;
	double P, N, hasil;
	scanf("%d",&T);
	if (T==3){
		for (int i=0;i<T;i++){
			scanf("%lf %lf", &P, &N);
			hasil = (P/100)*N;
			printf("%.2lf\n", hasil);
			}
		}
		return 0;
	}
	

