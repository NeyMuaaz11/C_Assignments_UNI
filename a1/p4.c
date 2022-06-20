/* CH230A a1p4.c
    Muaaz Rajput
    murajput@jacobs-university.de */


#include <stdio.h>

int main() {
    int sum, product, remainder, difference; // the results of addition, subtraction, multiplication and the remainder of division//
    float div; // the result of division//
    int x = 17;
    printf("x=%d\n", x);
    int y = 4;
    printf("y=%d\n", y);
    sum = x + y; 
    printf("sum=%d\n", sum);
    product = x * y;
    printf("product=%d\n", product);
    difference = x - y;
    printf("difference=%d\n", difference);
    div = (float)x / (float)y; //casts values of x and y as float and divides them to store the value including decimals//
    printf("division=%f\n", div);
    remainder = x % y; //calculates remainder//
    printf("remainder of division=%d\n", remainder);
    return 0;


}