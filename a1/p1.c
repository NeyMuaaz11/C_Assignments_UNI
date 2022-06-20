/*CH230-A a1p1
    Muaaz Rajput    
    murajput@jacobs-university.de*/
 
#include <stdio.h>
    int main() {
        double result; /* The result of our calculation */
        result = (double)(3+1)/5;//Casting int expression as double//
        printf("The value of 4/5 is %lf\n", result);
        return 0;
    }
    /*By default the numbers were being treated as ints and 
    the part beyond the decimal point was being ignored during 
    division resulting in zero being saved to result so it needed
    to be cast as a double*/