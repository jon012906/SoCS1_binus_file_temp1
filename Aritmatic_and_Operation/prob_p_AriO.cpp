#include <stdio.h>
int main (){
	double a, b,c; //harga akhir(b), diskon (a), harga awal(c)
	for (int i=0;i<=3;i++){
		scanf("%lf %lf",&a, &b);
		c = b/(1-(a*0.01));
		printf("$%.2lf\n",c);
	}
	
	return 0;
}
