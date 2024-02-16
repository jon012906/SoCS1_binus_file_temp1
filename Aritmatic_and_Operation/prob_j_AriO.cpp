#include <stdio.h>
int main (){
	float a,b,c;
	scanf("%f %f", &a,&b);
	c = b/a;
	printf("%.4f%%\n", b/a*100);
	return 0;
}
