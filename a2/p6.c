/*CH230-A a2p6
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>

int main() {
    double x, y;

    scanf("%lf\n%lf", &x, &y); // get input from keyboard //

    double *ptr_one = &x, *ptr_two = &x, *ptr_three = &y; // declare and initialize the three pointers // 

    printf("%p\n%p\n%p", ptr_one, ptr_two, ptr_three); // print the addresses where the three pointers point, two of which will be the same // 

    return 0;  

}