#include <stdio.h>

int main(void){
    int c;
    c = getchar() != EOF;
    printf("This is the number %d\n", c);
    return 0;
}