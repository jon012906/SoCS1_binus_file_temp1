#include<stdio.h>

int main(){

    double x,y,z;
    scanf("%lf", &x);
    y=50+(x*50);
    z=(x*50)+(x*y/2);
    printf("%.0lf\n", z);
    return 0;
}

