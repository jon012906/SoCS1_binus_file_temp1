#include <stdio.h>

int main (){
	int A,B;
	scanf("%d %d", &A,&B);
	if(A<=1000 && B<=1000){
		printf("%d\n", A%B);
	}
	else {
		printf("Wrong Answer\n");
	}
	return 0;
}
