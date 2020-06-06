# include <stdio.h>
#include "sub.h"
# include "add.h"

int main(){
    printf("this is my calculator\n");
    
    double x = 3;
    double y = 2;
    printf("%lf - %lf = %lf", x, y, sub(x,y));

    double x = 1;
    double y = 2;

    printf("%lf + %lf = %lf", x,y,add(x,y));
}



