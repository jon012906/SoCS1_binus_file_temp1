#include <stdio.h>

int main(){

for(int i=0;i<5;i++){
    char Course_code[10];
    int h1,h2,m1,m2;
    scanf("%s %d:%d-%d:%d", Course_code, &h1, &m1, &h2, &m2);
    printf("%s %02d:%02d-%02d:%02d\n", Course_code, h1-1, m1, h2-1, m2);

}

    return 0;
}
