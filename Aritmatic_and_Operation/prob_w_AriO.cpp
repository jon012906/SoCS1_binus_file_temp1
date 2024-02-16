#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	for (int i=0;i<=2;i++){
		scanf("%d", &a);
		c = log10(a);
		b = (int)(a / pow(10, c / 2))% 10;
    	printf("%d\n",b);		
	}
	return 0;
}
