#include <stdio.h>

int main (){
	int A,B;
	scanf("%d %d", &A,&B);
	if(A<=1000 && B<=1000){
		printf("%d\n%d\n%d\n%d\n%d\n", A+B,A-B,A*B,A/B,A%B);
	}
	return 0;
}
