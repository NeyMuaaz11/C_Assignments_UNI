/*CH230-A a2p4
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>

int main() {
    float a, b, h;
    float sqr, rect, tri, trap;

    scanf("%f\n%f\n%f", &a, &b, &h); // get three float inputs and save in respective variables //

    // calculate areas for different shapes //
    sqr = a*a;
    rect = a*b;
    tri = 0.5 * a * h;
    trap = ((a+b)/2) * h;

    // print all areas // 
    printf("square area=%f\n", sqr);
    printf("rectangle area=%f\n", rect);
    printf("triangle area=%f\n", tri);
    printf("trapezoid area=%f\n", trap);

    return 0;
}