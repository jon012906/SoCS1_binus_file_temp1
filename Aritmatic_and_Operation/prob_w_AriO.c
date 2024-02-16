#include <stdio.h>
int main (){
	int a,b,c;
	scanf("%d", &a);
	if (a>=100 && a<=999){
		for (int i=0;i<=2;i++){
			b = (int)(a / pow(10, digits / 2))% 10;
        	printf("%d",b);
		}
	}
	return 0;
}
