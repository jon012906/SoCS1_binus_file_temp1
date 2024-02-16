#include <stdio.h>

int main (){
	float a,b; 
	scanf("%f %f", &a,&b);
	if (a<=100000 && b<=a){
		printf("%.2f%%\n", (a-b)/a*100);
	}
	return 0;
}
