/* CH230A a1p3.c
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <stdio.h>

int main() {
    float result; // the result of our division//
    int a = 5;
    float b = 13.5;
    result = a/b;
    printf("the result is %f\n", result);
    return 0;
}
/* the hash was not present before include....
    the variable b was declared as an int but it
    had a float value....
    the wrong format was also used in the printf 
    statement as we were printing a float but used the format
    for an int*/