#include <stdio.h>

int main (){
	int x,y;
	scanf("%d %d",&x,&y);
	if (x<=100 && y<=10){
		for(int i=0;i<=y;i++){
			printf("%d\n", x++);
		}
	}
	return 0;
}
