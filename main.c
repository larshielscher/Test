# include <stdio.h>
#include "sub.h"

int main(){
    printf("this is my calculator\n");
    
    double x = 3;
    double y = 2;
    printf("%lf - %lf = %lf", x, y, sub(x,y));

}